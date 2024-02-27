// Reverse the digits of a three digit number
#include <stdio.h>

int main(void)
{
  int number, last_digit, middle_digit, first_digit; // declaring variables

  printf("Enter a three-digit number: "); // prompt
  scanf("%d", &number); // input

  last_digit = number % 10; // gives the last digit
  number /= 10;        // number = number / 10
  middle_digit = number % 10;   // gives middle digit
  first_digit = number / 10;    // gives first digit

  printf("The reversal is: %d%d%d", last_digit, middle_digit, first_digit); // print the reversed number

  return 0;
}
