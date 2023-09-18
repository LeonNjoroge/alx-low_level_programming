#include "main.h"

void print_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            _putchar(", "); 
        }
        _putchar("%d", a[i]); 
    }
    _putchar("\n")
}
