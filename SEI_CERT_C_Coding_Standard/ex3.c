#include <stdio.h>

static inline int iabs(int x) {return x < 0? -x : x;}
static inline long labs(long x) {return x < 0? -x : x;}
static inline double dabs(double x) {return x < 0? -x : x;}

#define ABS(v) _Generic(v, int : iabs, long: labs, double: dabs)(v)

int main()
{
  int val = -5;
  double fval = 5.1;
  printf("%d\n", ABS(val++));
  printf("%f\n", ABS(fval));
  return 0;
}
