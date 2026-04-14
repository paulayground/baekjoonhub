#include <stdio.h>

int main() {
  int arr[9];
  for (int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int index = 1;
  for (int i = 0; i < 9; i++) {
    if (max < arr[i]) {
      max = arr[i];
      index = i + 1;
    }
  }

  printf("%d\n", max);
  printf("%d\n", index);
}
