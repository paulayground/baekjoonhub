#include <stdio.h>

int main() {
  int x, n;
  scanf("%d", &x);
  scanf("%d", &n);

  int a, b, sum;
  sum = 0;
  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &a, &b);
    sum = sum + a * b;
  }

  if (x == sum) {
    printf("Yes");
  } else {
    printf("No");
  }
}