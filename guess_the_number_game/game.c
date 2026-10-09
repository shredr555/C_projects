#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validate_range(int left_number, int right_number)
{
  if (left_number >= right_number) {
    printf("The lower limit must be less than the upper limit\n");
    return 1;
  }
  return 0;
}

int validate_guess_number(int left_number, int right_number, int guess_number)
{
  if (guess_number < left_number) {
    printf("The number must be greater than lower limit: %d\n", left_number);
    return 1;
  }
  if (guess_number > right_number) {
    printf("The number must be less than the upper limit: %d\n", right_number);
    return 1;
  }
  return 0;
}

int main(void)
{
  srand(time(NULL));
  int left_number, right_number, chosen_number, guess_number, attempt = 0;

  printf("Enter a range of numbers separated by space:\n");

  if (scanf("%d %d", &left_number, &right_number) != 2) {
    printf("Error input\n");
    return 1;
  }

  if (validate_range(left_number, right_number)) {
    return 1;
  }

  chosen_number = rand() % (right_number - left_number + 1) + left_number;

  while (attempt < 3) {
    printf("Enter your guess:\n");

    if (scanf("%d", &guess_number) != 1) {
      printf("Error input\n");
      return 1;
    }
    if (validate_guess_number(left_number, right_number, guess_number)) {
      continue;
    }
    if (chosen_number == guess_number) {
      printf("Congratulations!!!\n");
        return 0;
    } else if (guess_number < chosen_number) {
      printf("Not %d. Try a larger number\n", guess_number);
    } else {
      printf("Not %d. Try a smaller number\n", guess_number);
    }
    attempt++;
  }
  printf("Game over! The number was %d\n", chosen_number);

  return 0;
}
