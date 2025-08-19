@echo off

echo Compiling GenerateCases.cpp...
g++ -std=c++17 -o GenerateCases GenerateCases.cpp
if errorlevel 1 (
    echo Compilation of GenerateCases.cpp failed.
    goto :end
)

echo Compiling brute.cpp...
g++ -std=c++17 -DONLINE_JUDGE "brute.cpp" -o "brute.exe"
if errorlevel 1 (
    echo Compilation of brute.cpp failed.
    goto :end
)

echo Compiling optimal.cpp...
g++ -std=c++17 -DONLINE_JUDGE "optimal.cpp" -o "optimal.exe"
if errorlevel 1 (
    echo Compilation of optimal.cpp failed.
    goto :end
)

echo All files compiled successfully. Starting stress testing...

for /l %%i in (1, 1, 100) do (
    echo Running test case %%i
    GenerateCases.exe > generated.txt

    brute.exe < generated.txt > bruteOutput.txt
    optimal.exe < generated.txt > optimalOutput.txt

    fc bruteOutput.txt optimalOutput.txt > nul
    if errorlevel 1 (
        echo Test case %%i failed
        echo Content of generated.txt:
        type generated.txt
        echo expected: 
        type bruteOutput.txt 
        echo Output:
        type optimalOutput.txt
        goto :end
    )
)

:end
echo Created by Nish
pause > nul