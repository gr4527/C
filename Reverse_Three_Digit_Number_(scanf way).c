// Reverse the digits of a number using scanf(%1d%1d%1d... format)
#include <stdio.h>

int main(void)
{
  int digit1, digit2, digit3, last_digit, middle_digit, first_digit; // declaring variables

  printf("Enter a three-digit number: "); // prompt
  scanf("%1d%1d%1d", &digit1, &digit2, &digit3); // input

  last_digit = digit3;      // gives the last digit
  middle_digit = digit2;   // gives middle digit
  first_digit = digit1;    // gives first digit

  printf("The reversal is: %d%d%d", last_digit, middle_digit, first_digit);

  return 0;
}
