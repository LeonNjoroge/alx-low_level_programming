#include <unistd.h>

void _putchar(const char *str) {
    while (*str) {
      write(1, str, 1);
        str++;
    }
}
