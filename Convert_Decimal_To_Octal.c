// Write a program which converts a decimal to octal

#include <stdio.h>

int main(void)
{
  int number, last_digit_octal, nextToLastDigit2,
      nextToLastDigit3, nextToLastDigit4, nextToLastDigit5, octal_number; // declare a variable number

  printf("Enter a number between 0 and 32767: "); // prompt assume the maximum int is 32767

  scanf("%d", &number);

  last_digit_octal = number % 8;      // remainder of number divided by 8
  number = number / 8;                // divide the number by 8 and update it
  nextToLastDigit2 = number % 8;      // remainder of number = number / 8 (updated)
  number = number / 8;                // divide number by 8 and update it
  nextToLastDigit3 = number % 8;      // remainder of number = number / 8 (updated)
  number = number / 8;                // divide number by 8 and updated it
  nextToLastDigit4 = number % 8;      // remainder of number = number / 8 (updated)
  number = number / 8;
  nextToLastDigit5 = number % 8;

  octal_number = nextToLastDigit5 * 10000 + nextToLastDigit4 * 1000
                + nextToLastDigit3 * 100 + nextToLastDigit2 * 10 + last_digit_octal; // octal_number converted use multiplication by weight

  printf("In octal, your number is: %.5d", octal_number); // print the number with minimum five digits in a field as the number

  return 0; // return 0 if successful executing the program
}
