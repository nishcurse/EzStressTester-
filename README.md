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

# Demo
<p align="center">
  

https://github.com/user-attachments/assets/6f635a52-f5eb-4053-8139-d48d155a759d


</p>

# Image Gallery

Script-File Interface
<div align="center display: flex;">
  <img width="1378" height="739" alt="image" src="https://github.com/user-attachments/assets/eeedda1f-7aa2-4a8d-8730-3ce05a010009" />
</div>

## 👨💻 The Team
We built this to make stress testing easier for everyone!
Feedback and contributions are *strongly* welcomed.
**Team Coding Wiz**
- [Nish](https://github.com/nish)
- [gokuu007](https://github.com/gokuu007)

***

**Thank you for trying the Stress Tester!**  
*Found a bug or want to suggest a feature? [Open an issue or PR](https://github.com/nishcurse/EzStressTester-/issues) — we appreciate your feedback!*




