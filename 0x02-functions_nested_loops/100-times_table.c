#include <stdio.h>

void print_times_table(int n) {
  // Check if n is within the allowed range.
  if (n < 0 || n > 15) {
    return;
  }

  int i, j;

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= n; j++) {
      // Multiply i by j to get the table value, and print it.
      printf("%4d", i * j);
    }
    // Print a newline character after each row.
    printf("\n");
  }
}
