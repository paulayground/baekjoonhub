#include <stdio.h>

int main() {
  int hour;
  int minute;
  int cooking_minute;
  scanf("%d %d", &hour, &minute);
  scanf("%d", &cooking_minute);

  int upper = 0;
  int total_minute = minute + cooking_minute;
  if (total_minute >= 60) {
    upper = (total_minute) / 60;
    minute = total_minute % 60;
  } else {
    minute = total_minute;
  }

  hour = hour + upper;
  if (hour >= 24) {
    hour = hour % 24;
  }

  printf("%d %d", hour, minute);

  return 0;
}
