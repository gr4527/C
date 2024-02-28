// Find the largest of four integers
#include <stdio.h>

int main(void)
{
  int i, j, k, m, largest;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &i, &j, &k, &m);

// Without using sorting algorithm this is one of the ways solving this

  if(i > j)
  {
    if(i > k)
    {
      if(i > m)
        largest = i;
    }
    else if(k > j)
      if(k > m)
        largest = k;
  }
  else if(j > k)
  {
    if(j > m)
      largest = j;
  }
  else if(k > m)
    largest = k;
  else
    largest = m;

  printf("Largest is %d", largest);

//**********************************
  //Other possible solution idea
  //else if(j > i && j > k && j > m)
  //largest = j
  //else
  //k >
//**********************************

  return 0;
}
