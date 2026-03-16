#include <stdio.h>
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main() {
  int a, b, c, price;
  scanf("%d %d %d", &a, &b, &c);

  // 3개가 같은 경우
  if (a == b && b == c) {
    price = 10000 + a * 1000;
  }
  // 2개가 같은 경우
  else if (a == b || a == c) {
    price = 1000 + a * 100;
  } else if (b == c) {
    price = 1000 + b * 100;
  }
  // 전부 다른 경우
  else {
    price = MAX(a, MAX(b, c)) * 100;
  }

  printf("%d", price);
}