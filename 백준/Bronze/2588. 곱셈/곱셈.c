#include <stdio.h>
#include <string.h>

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  // b to char[]
  char str_b[4];
  sprintf(str_b, "%d", b);

  // char[] b to int[]
  int arr_b[3];
  for (int i = 0; i < strlen(str_b); i++) {
    arr_b[i] = str_b[i] - '0';
  }

  // reverse arr
  int reverse_arr_b[3];
  int arr_b_size = sizeof(arr_b) / sizeof(arr_b[0]);
  for (int i = 0; i < arr_b_size; i++) {
    reverse_arr_b[i] = arr_b[arr_b_size - i - 1];
  }

  // calc digit
  int digit = 1;
  int updated_reverse_arr_b_by_digit[3];
  for (int i = 0; i < arr_b_size; i++) {
    updated_reverse_arr_b_by_digit[i] = reverse_arr_b[i] * digit;

    digit = digit * 10;
  }

  // calc sum
  // calc undigit
  int result[3];
  int sum = 0;
  digit = 1;
  for (int i = 0; i < arr_b_size; i++) {
    result[i] = a * updated_reverse_arr_b_by_digit[i];

    sum = sum + result[i];

    result[i] = result[i] / digit;
    digit = digit * 10;
  }

  printf("%d\n", result[0]);
  printf("%d\n", result[1]);
  printf("%d\n", result[2]);
  printf("%d\n", sum);

  return 0;
}