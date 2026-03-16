#include <stdio.h>
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main() {
  int a, b, c, price;
  scanf("%d %d %d", &a, &b, &c);

  if (a == b && b == c && a == c) {
    price = 10000 + a * 1000;
  } else if (a != b && b != c && a != c) {
    price = MAX(MAX(a, b), c) * 100;
  } else {
    if (a == b) {
      price = 1000 + a * 100;
    } else if (b == c) {
      price = 1000 + b * 100;
    } else {
      price = 1000 + c * 100;
    }
  }

  printf("%d", price);

  return 0;
}