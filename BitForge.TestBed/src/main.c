#include <core/logger.h>
#include <core/asserts.h>
#include <platform/platform.h>

int main(void) {
  BFFATAL("Hello, %s", "World!");
  BFERROR("Hello, %s", "World!");
  BFWARN("Hello, %s", "World!");
  BFINFO("Hello, %s", "World!");
  BFDEBUG("Hello, %s", "World!");
  BFTRACE("Hello, %s", "World!");

  platform_state state;
  if (platform_startup(&state, "BitForge Testbed", 100, 100, 1280, 720)) {
    while (true) {
      platform_pump_messages(&state);
    }
  }
  platform_shutdown(&state);

  return 0;
}
