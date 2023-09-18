#include "main.h"
#include <string.h>


void rev_string(char *s) {
    int length = strlen(s);
    int left = 0;
    int right = length - 1;
    
    while (left < right) {
       
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }
}
