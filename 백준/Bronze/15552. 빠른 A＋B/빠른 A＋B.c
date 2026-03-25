#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  int a, b;
  for (int i = 0; i < t; i++) {
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", a + b);
  }
}