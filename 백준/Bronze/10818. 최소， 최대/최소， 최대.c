#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    max = max < arr[i] ? arr[i] : max;
    min = min > arr[i] ? arr[i] : min;
  }

  printf("%d %d", min, max);
}
