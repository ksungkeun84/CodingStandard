#include <stdio.h>

static inline int iabs(int x) {return x < 0? -x : x;}
static inline long labs(long x) {return x < 0? -x : x;}
static inline double dabs(double x) {return x < 0? -x : x;}

int main()
{
  int val = -5;
  double fval = 5.1;
  printf("%d\n", iabs(val++));
  printf("%f\n", dabs(fval));
  return 0;
}
