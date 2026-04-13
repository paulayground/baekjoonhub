#include <stdio.h>

int main() {
  int n, v;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &v);

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == v) {
      count++;
    }
  }

  printf("%d", count);
}
