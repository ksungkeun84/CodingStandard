#include <stdio.h>
#include <assert.h>
#include <stddef.h>

//#ifdef NDEBUG
//#define assert(x) {x}
//#else
//#define assert(x) (void(0))
//#endif

void process(size_t index) {
  //assert(index++ > 0);
  assert(index > 0);
  ++index;
  printf("index after assert: %zu\n", index);
}

int main()
{
  process(1);
  return 0;
}

