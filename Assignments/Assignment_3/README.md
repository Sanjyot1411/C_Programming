# C Programming - Assignment 3

C programs demonstrating loops, conditional logic, logical operators, character handling and the `stdbool.h` boolean type.

---

## Project Structure

Assignment_3/
├── Program3_1.c
├── Program3_2.c
├── Program3_3.c
├── Program3_4.c
├── Program3_5.c
└── README.md


---

## Programs

| File | Function | Description | Input | Output |
|------|----------|-------------|-------|--------|
| `Program3_1.c` | `PrintEven(int)` | Print the first N even numbers (2, 4, ... 2N) | int | void |
| `Program3_2.c` | `DisplayFactor(int)` | Print all even numbers from 1 to N (negative input converted to positive) | int | void |
| `Program3_3.c` | `DisplayEvenFactor(int)` | Print all even factors of a number (negative input converted to positive) | int | void |
| `Program3_4.c` | `DisplayConvert(char)` | Convert lowercase to uppercase and uppercase to lowercase | char | void |
| `Program3_5.c` | `CheckVowel(char)` | Check whether a character is a vowel | char | bool |

---

## Sample Input / Output

**Program3_1.c**
```
Enter number
5
2	4	6	8	10
```

**Program3_2.c**
```
Enter number
10
2	4	6	8	10
```

**Program3_3.c**
```
Enter number
12
2	4	6	12
```

**Program3_4.c**
```
Enter character
a
A
```
```
Enter character
G
g
```

**Program3_5.c**
```
Enter character
e
TRUE
```
```
Enter character
x
FALSE
```

---

## Build and Run

```bash
gcc Program3_1.c -o Program3_1
./Program3_1          # Linux / macOS
Program3_1.exe        # Windows
```

Replace `Program3_1` with the program you want to run.

---

## Input Validation
- `Program3_1.c` returns immediately for zero or negative input.
- `Program3_2.c` and `Program3_3.c` convert negative input to positive before processing.
- `Program3_4.c` prints nothing for non-alphabetic characters.

---

## Coding Conventions
- Hungarian notation for variables: `i` for int (`iNo`, `iCnt`), `c` for char (`cValue`), `b` for bool (`bRet`)
- PascalCase for function names (`PrintEven`, `CheckVowel`)
- Logic is kept in separate functions, while `main()` handles only input and function calls

---

## Concepts Covered
- `for` loops and loop counters
- `if` / `else if` / `else` decision making
- Logical operators (`&&`, `||`)
- Modulus operator (`%`) for even numbers and factors
- Character handling using ASCII values (difference of 32 between cases)
- `bool` type from `stdbool.h`
- Console I/O using `printf()` and `scanf()`

---

## Author
**Sanjyot Sandip Nagawade**