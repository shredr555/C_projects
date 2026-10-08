# C Calculator

A simple command-line calculator written in C.

The project was created as a small practice project to learn the basics of the C programming language, including functions, input validation, switch statements, and floating-point arithmetic.

## Features

  - Addition
  - Subtraction
  - Division
  - Multiplication
  - Input validation
  - Division-by-zero protection
  - long double arithmetic

## Requirements

  - GCC or another C compiler
  - C17-compatible compiler

## Compilation

Compile the program with:

`gcc -Wall -Wextra -Wpedantic -std=c17 calculator.c -o calculator`

## Usage

Run the program:

`./calculator`

Enter two numbers separated by space:

```cmd
Enter two numbers separated by space:
10 5
```

Then select an arithmetic operation:

```cmd
Select an arithmetic operation:
1. +
2. -
3. /
4. *
```

For example, selecting 3 will perform division:

```cmd
Result: 2.00000
```

## Project structure

The program is divided into three main parts:
 - `main()` - handles user input and program flow.
 - `validate()` - checks the selected operation and prevents division by zero.
 - `calculate()` - performs the requested arithmetic operation and returns the result.