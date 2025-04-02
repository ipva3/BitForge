#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
  BFFATAL("Hello, %s", "World!");
  BFERROR("Hello, %s", "World!");
  BFWARN("Hello, %s", "World!");
  BFINFO("Hello, %s", "World!");
  BFDEBUG("Hello, %s", "World!");
  BFTRACE("Hello, %s", "World!");

  BFASSERT(false);
  BFASSERT(1 == 0);

  return 0;
}
