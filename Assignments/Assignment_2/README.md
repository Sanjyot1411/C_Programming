# C Programming - Assignment 2

Beginner C programs demonstrating functions with parameters, loops, conditional logic and user-defined types.

---

## Project Structure

Assignment_2/
├── Program2_1.c
├── Program2_2.c
├── Program2_3.c
├── Program2_4.c
├── Program2_5.c
└── README.md

---

## Programs

| File | Function | Description | Input | Output |
|------|----------|-------------|-------|--------|
| `Program2_1.c` | `Display(int)` | Print `*` N times using a `while` loop | int | void |
| `Program2_2.c` | `Display(int)` | Print `*` N times using a `while` loop | int | void |
| `Program2_3.c` | `Display(int)` | Print `Hello` if number < 10, else `Demo` | int | int |
| `Program2_4.c` | `Display(int, int)` | Print a number repeatedly, as many times as the given frequency | int, int | void |
| `Program2_5.c` | `ChkEven(int)` | Check whether a number is even or odd | int | BOOL |

---

## Sample Input / Output

**Program2_1.c / Program2_2.c**

Enter number :
5
 *  *  *  *  *


**Program2_3.c**

Enter number :
7
Hello

Enter number :
15
Demo


**Program2_4.c**

Enter number :
4
Enter frequency :
3
4
4
4


**Program2_5.c**

Enter number :
10
It is Even

Enter number :
7
It is Odd


## Build and Run

bash
gcc Program2_1.c -o Program2_1
./Program2_1          # Linux / macOS
Program2_1.exe        # Windows


Replace `Program2_1` with the program you want to run.

---

## Coding Conventions
- Hungarian notation for variables: `i` for int (`iNo`, `iCnt`), `b` for BOOL (`bRet`)
- PascalCase for function names (`Display`, `ChkEven`)
- Each function takes input via parameters and returns its result, keeping logic separate from `main()`

---

## Concepts Covered
- Functions with parameters and return values
- `while` and `for` loops
- `if` / `else` decision making
- `typedef` and `#define` (`BOOL`, `TRUE`, `FALSE`)
- Modulus operator (`%`)
- Console I/O using `printf()` and `scanf()`

---

## Author
**Sanjyot Sandip Nagawade**