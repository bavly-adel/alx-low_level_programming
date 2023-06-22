#include <stdio.h>

int main(void) {
  int prev;
  int curr;
  int sum;
  int next;
prev = 1;
    curr = 2;
    sum = 0;
  while (curr <= 4000000) {
    if (curr % 2 == 0) {
      sum += curr;
    }

    next = prev + curr;
    prev = curr;
    curr = next;
  }

  printf("%d\n", sum);

  return 0;
}

