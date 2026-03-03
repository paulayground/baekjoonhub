#include <stdio.h>

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  int d1 = b % 10;
  int d2 = (b / 10) % 10;
  int d3 = b / 100;

  printf("%d\n", a * d1);
  printf("%d\n", a * d2);
  printf("%d\n", a * d3);
  printf("%d\n", a * b);

  return 0;
}
