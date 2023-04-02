#include <stdio.h>
#define ABS(x) ((x < 0) ? -(x) : (x))

int main()
{
  int val = -5;

  printf("ABS(val++) : %d\n", ABS(val++));
  printf("val after ABS: %d\n", val);

  //printf("%d\n", ((val++ < 0) ? -(val++) : (val++)));
  //print 5, val = val + 1

  return 0;
}
