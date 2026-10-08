#include <stdio.h>

int validate(long double number_2, int operation)
{
  if (operation < 1 || operation > 4) {
    printf("Incorrect input\n");
    return 1;
  }
  if (operation == 3 && number_2 == 0) {
    printf("You cannot divide by zero\n");
    return 1;
  }
  return 0;
}

long double calculate(long double number_1, long double number_2, int operation)
{
  switch (operation) {
    case 1:
      return number_1 + number_2;
    case 2:
      return number_1 - number_2;
    case 3:
      return number_1 / number_2;
    case 4:
      return number_1 * number_2;
  }
  return 0;
}

int main(void)
{
  long double number_1, number_2;
  int operation;

  printf("Enter two numbers separated by a space\n");

  if(scanf("%Lf %Lf", &number_1, &number_2) != 2) {
    printf("Error input\n");
    return 0;
  }

  printf("Select an arithmetic operator\n"
         "1. +\n"
         "2. -\n"
         "3. /\n"
         "4. *\n");

  if(scanf("%d", &operation) != 1) {
    printf("Error input\n");
    return 0;
  }

  int validation_result = validate(number_2, operation);
  if (validation_result) {
    return 1;
  }

  long double result = calculate(number_1, number_2, operation);

  printf("Result: %Lf\n", result);

  return 0;
}
