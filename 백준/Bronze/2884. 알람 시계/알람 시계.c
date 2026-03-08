#include <stdio.h>

int main() {
  int h, m;

  scanf("%d %d", &h, &m);

  int h_index = 0;
  if (m - 45 < 0) {
    m = m + 60 - 45;
    h_index--;
  } else {
    m = m - 45;
  }

  h = h + h_index;
  if (h < 0) {
    h = 23;
  }

  printf("%d %d", h, m);

  return 0;
}
