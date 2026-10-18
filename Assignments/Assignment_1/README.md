# C Programming - Assignment 1

A collection of 5 beginner C programs covering functions, loops, conditional statements, `typedef` and user input.

Author : Sanjyot Sandip Nagawade
Date   : 18/10/2026

---

## Folder Structure


C_Programming/
└── Assignments/
    └── Assignment_1/
        ├── Program1_1.c
        ├── Program1_2.c
        ├── Program1_3.c
        ├── Program1_4.c
        ├── Program1_5.c
        └── README.md


---

## Programs

| Sr. No. | File | Description | Input | Output |
|---------|------|-------------|-------|--------|
| 1 | `Program1_1.c` | Divide two numbers (returns -1 if divisor is 0) | int, int | int |
| 2 | `Program1_2.c` | Print "Marvellous" 5 times using a `for` loop | void | void |
| 3 | `Program1_3.c` | Print numbers from 5 to 1 using a `while` loop | void | void |
| 4 | `Program1_4.c` | Accept a number from the user and check if it is divisible by 5 | int | BOOL |
| 5 | `Program1_5.c` | Print `*` five times using a `for` loop | int | void |

---

## Program Details

### 1. Program1_1.c - Divide Two Numbers
- Function: `int Divide(int iNo1, int iNo2)`
- Performs integer division of two numbers.
- Returns `-1` if the second number is `0` (to avoid division by zero).

- **Sample Output:**
  ```
  Division is 3
  ```

### 2. Program1_2.c - Print "Marvellous" 5 Times
- Function: `void Display()`
- Uses a `for` loop to print the word `Marvellous` five times.

- **Sample Output:**
  ```
  Marvellous
  Marvellous
  Marvellous
  Marvellous
  Marvellous
  ```

### 3. Program1_3.c - Print 5 to 1
- Function: `Display()`
- Uses a `while` loop with a decrementing counter.

- **Sample Output:**
  ```
  54321
  ```

### 4. Program1_4.c - Divisible by 5 or Not
- Function: `BOOL Check(int iNo)`
- Uses `typedef int BOOL;` with `#define TRUE 1` and `#define FALSE 0`.
- Accepts a number from the user and checks divisibility using the modulus (`%`) operator.

- **Sample Output:**
  ```
  Enter number :
  25
  Divisible by 5
  ```
  ```
  Enter number :
  12
  Not divisible by 5
  ```

### 5. Program1_5.c - Print Stars
- Function: `void Accept(int iNo)`
- Uses a `for` loop to print `*` five times.

- **Sample Output:**
  ```
   *  *  *  *  *
  ```

---

## Concepts Covered
- Function declaration, definition and calling
- Return types (`int`, `void`, user-defined `BOOL`)
- Conditional statements (`if`, `else`)
- Loops (`for`, `while`)
- `typedef` and `#define`
- Input/Output using `printf()` and `scanf()`
- Modulus (`%`) and division (`/`) operators

---

## How to Compile and Run

Make sure you have the GCC compiler installed.

```bash
gcc Program1_1.c -o Program1_1
./Program1_1
```

On Windows (Command Prompt / PowerShell):

```bash
gcc Program1_1.c -o Program1_1.exe
Program1_1.exe
```

Replace `Program1_1` with the file name of the program you want to run.

---

## Tools Used
- Language: C
- Editor: Visual Studio Code
- Compiler: GCC

---

## Author
**Sanjyot Sandip Nagawade**