#include "main.h"

void print_array(int *a, int n) {
  int i = 0;
  for (; i < n; i++) {
        if (i > 0) {
            _putchar(', '); 
        }
        _putchar( a[i]); 
    }
    _putchar('\n');
}
