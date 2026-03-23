#include <stdio.h>

int main() {
  int t, a, b, i;
  scanf("%d", &t);

  i = 0;
  while (i < t) {
    scanf("%d %d", &a, &b);

    printf("%d\n", a + b);
    i++;
  }
}