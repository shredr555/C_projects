# Guess the Number

A simple command-line guessing game written in C.

The program generates a random number within a user-defined range. The player has three valid attempts to guess the number.

## Features

 - Custom number range
 - Random number generation
 - Three attempts per game
 - Hints after each incorrect guess
 - Input validation
 - Invalid guesses do not consume an attempt
 - Protection against invalid ranges

## Requirements

 - GCC or another C compiler
 - C17-compatible compiler
 - Compilation

## Compile the program with:

`gcc -Wall -Wextra -Wpedantic -std=c17 guessing_game.c -o guessing_game`
 
# Usage

Run the program:

`./guessing_game`

First, enter the lower and upper limits of the range:

```cmd
Enter a range of numbers separated by space:
1 100
```

The program will then generate a random number between these limits.

You have three valid attempts to guess it:

```cmd
Enter your guess:
50
Not 50. Try a larger number.
Enter your guess:
75
Not 75. Try a smaller number.
Enter your guess:
63
Congratulations!
```

Entering a number outside the selected range does not consume an attempt.

## How It Works

The program consists of several main components:

 - `validate_range()` checks that the lower limit is less than the upper limit.
 - `validate_guess_number()` checks that the player's guess is within the selected range.
 - `rand()` is used to generate the secret number.
 - A `while` loop controls the number of valid attempts.
 - The player receives a hint indicating whether the secret number is higher or lower than the guess.

## Input Validation

The program handles several invalid input cases:

 - Non-numeric input
 - An invalid number range
 - A guess below the lower limit
 - A guess above the upper limit

Invalid guesses do not reduce the number of remaining attempts.