// Print -1,0, or 1 whenever i < j, == or >, respectively
#include <stdio.h>

int main(void)
{
  int i, j;

  printf("Print -1,0, or +1 whenever i < j, i == j  or i > j, respectively\n");

  printf("Enter a value of i: ");
  scanf("%d", &i);
  printf("Enter a value of j: ");
  scanf("%d", &j);

  printf("\n%d", i < j ? -1 : (i == j ? 0 : 1));

  return 0;
}
