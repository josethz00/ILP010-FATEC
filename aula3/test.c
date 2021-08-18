#include <stdio.h>

int main(void) {
  printf("%d %d %d %d", !3, !0, 'a' > 'b', 2&&!'c'); // 0 1 0 0
  return 0;
}