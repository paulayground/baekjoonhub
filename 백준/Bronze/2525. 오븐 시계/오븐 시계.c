#include <stdio.h>

int main() {
  int hour, minute, cooking_minute;
  scanf("%d %d", &hour, &minute);
  scanf("%d", &cooking_minute);

  int total_minute = minute + cooking_minute;

  hour += total_minute / 60;
  minute = total_minute % 60;

  hour %= 24;

  printf("%d %d", hour, minute);

  return 0;
}