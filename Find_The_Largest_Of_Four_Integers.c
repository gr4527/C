// Find the largest of four integers. Repeating gives one of the variables which might not be security wise desired
#include <stdio.h>

int main(void)
{
  int i, j, k, m, largest;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &i, &j, &k, &m);

// Without using sorting algorithm this is one of the ways solving this
// Not Recommended solution because it is error prone // hard to go through the probabilities if either comparison for quality check
// EDITED:
  if(i > j)
  {
    if(i > k)
    {
      if(i > m)
        largest = i;
      else if(k > j)
        if(k > m)
          largest = k;
        else
          largest = m;
    }
  }
  else if(j > k)
  {
    if(j > m)
      largest = j;
    else if(k > m)
      largest = k;
    else
      largest = m;
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
  // i > j ? value : value
//**********************************

  return 0;
}
