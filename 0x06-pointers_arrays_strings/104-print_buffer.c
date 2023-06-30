#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }
    int i, j;
    for (i = 0; i < size; i += 10) {
        printf("%08x ", i);
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x ", (unsigned char)b[i + j]);
            } else {
                printf("   ");
            }
        }
        printf(" ");
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%c", isprint(b[i + j]) ? b[i + j] : '.');
            }
        }
        printf("\n");
    }
}
