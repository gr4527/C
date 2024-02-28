// Enter value of i that will be compared to 100
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
  int i, value;

  printf("Enter value of i that will be compared to 100: ");
  scanf("%d", &i);

  value = i >= 100 ? (value <= 100 ? TRUE : FALSE) : FALSE;

  printf("%d", value);

  return 0;
}
