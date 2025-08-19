#  Ezstress Tester (c++) 
<p align="center">
  <a href="https://github.com/nishcurse/EzStressTester-">
    <img src="https://img.shields.io/github/stars/nishcurse/EzStressTester-?style=flat-square" alt="GitHub Stars">
  </a>
  <a href="https://github.com/nishcurse/EzStressTester-/fork">
    <img src="https://img.shields.io/github/forks/nishcurse/EzStressTester-?style=flat-square" alt="GitHub Forks">
  </a>
  <img src="https://img.shields.io/badge/PRs-welcome-brightgreen?style=flat-square" alt="PRs welcome">
  <img src="https://img.shields.io/badge/GCC-14%2B-blue.svg?style=flat-square" alt="GCC 14+">
  <a href="https://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/badge/License-MIT-yellow.svg?style=flat-square" alt="MIT License">
  </a>
</p>

> **Now supporting GCC 14+!**
> The `generative.h` header is fully functional with latest C++ compilers. Thank you for your feedback and patience!

## 📋 Table of Contents
- [Project Overview](#project-overview)
- [How to Use](#how-to-use)
- [generative.h Header Functions](#generativeh-header-functions)
- [Demo GIF](#demo-gif)
- [Image Gallery](#image-gallery)
- [The Team](https://github.com/nishcurse/EzStressTester-/tree/main?tab=readme-ov-file#-the-team)

# Project Overview
**Stress Tester** is a toolkit to help you catch bugs in your C++ solutions by generating random test cases, running both your brute and optimal solutions, and finding discrepancies instantly. Perfect for competitive programmers who want to verify the correctness of their optimized solutions!

#  How to Use
1. **Download the Repository**
Grab the ZIP from this repository and extract it to your machine.
2. **Write Your Code**
    - **generateCases.cpp:** Implement your test case generator using the supplied functions.
    - **brute.cpp:** Add a *correct/brute-force* reference solution.
    - **optimal.cpp:** Place your *optimized solution* here.
3. **Run the Script**
Double-click the script file for your compiler:
    - `ScriptCpp17.bat` – If you **don’t** have the latest GCC.
    - `ScriptCpp20.bat` – If you **do**.
> If a mismatch is found, the script stops and prints the test case.

# generative.h Header Functions
No more writing custom generators for the basics!
Simply use the following functions in your `generateCases.cpp`:
| Function | Description | Example Usage |
| :-- | :-- | :-- |
| `generate_number(l, r)` | Generates a random number in `[l, r]`. Returns value. | `int num = generate_number(1, 10);`<br>`cout << num << endl;` |
| `generate_array(l, r, n)` | Prints an array of size `n` with values in `[l, r]`. | `generate_array(1, 10, 5);` |
| `generate_permutation(l, r)` | Prints a random permutation of `[l, r]`. | `generate_permutation(1, 5);` |
| `generate_string(l, r, n)` | Prints a string of length `n` with chars from `['a'+l, 'a'+r]`. | `generate_string(0, 2, 5);`<br><sup>// "abcabc"-style</sup> |
| `generate_alpha_numeric_string(nl, nr, cl, cr, size)` | Prints an alphanumeric string of `size` with numbers in `[nl, nr)` and chars in `[cl, cr)`. | - |
| `generate_tree(n)` | Prints a random tree with `n` nodes. | `generate_tree(5);` |

# Demo GIF
<p align="center">
  <!-- Place your main demo GIF below -->
  <img src="https://your.domain/path-to-gif.gif" alt="Demo Animation" width="700" />
  <br>
  <i>Add your demonstration GIF here (showing code in action, test case generation, etc.)</i>
</p>

# Image Gallery
Generated Test Cases & Output
<p align="center"> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/ed52cd78-ee55-4c80-b6cd-5f498cbc4ab3" width="260" height="300" alt="Generate Function" title="Generate Function" /> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/201b6d4b-b832-49e7-89b3-2370ca9c8ff1" width="260" height="300" alt="Output of a Test Case" title="Output of a Test Case" /> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/21ce31e8-fe03-432b-a829-ce4f8554aff4" width="260" height="300" alt="Example Test Case Output" title="Example Test Case Output" /> 
</p>

Stress Testing Example  
Running on this Codeforces problem:  
<p align="center"> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/62d80ddb-5134-4035-9096-10612de99eb6" width="230" height="300" alt="Stress Test Run 1" title="Stress Test Run 1"/> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/44ea9722-d763-4014-a5e0-77ba38cfc85a" width="230" height="300" alt="Stress Test Run 2" title="Stress Test Run 2"/> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/581120eb-b573-4a2c-bd8a-61308d68bb97" width="230" height="300" alt="Stress Test Run 3" title="Stress Test Run 3"/> 
</p>

Script File Interface  
<p align="center"> 
  <img src="https://github.com/Nishcurse/Javascript/assets/114647752/054f64c0-c1e8-4574-9998-d7c6f711d0ef" width="260" height="300" alt="Script File Interface" title="Script File Interface"/> 
</p>

## 👨💻 The Team
We built this to make stress testing easier for everyone!
Feedback and contributions are *strongly* welcomed.
**Team Coding Wiz**
- [Nish](https://github.com/nish)
- [gokuu007](https://github.com/gokuu007)

***

**Thank you for trying the Stress Tester!**  
*Found a bug or want to suggest a feature? [Open an issue or PR](https://github.com/nishcurse/EzStressTester-/issues) — we appreciate your feedback!*


