// Link to kata: https://www.codewars.com/kata/525f4206b73515bffb000b21/

#include <stdlib.h>
#include <string.h>

#define MIN(x, y) x < y ? x : y
#define MAX(x, y) x > y ? x : y

char *add(const char *a, const char *b) {
    
    size_t a_len = strlen(a);
    size_t b_len = strlen(b);

    size_t min_len = MIN(a_len, b_len);
    size_t max_len = MAX(a_len, b_len);
    size_t len_diff = max_len - min_len;

    const char* max_str = a_len > b_len ? a : b;
    const char* min_str = a_len <= b_len ? a : b;

    // The size of the max number of digits plus null byte plus one
    char* outstr = calloc(sizeof(char), max_len+3); 

    char carry = 0;

    for (signed int i = max_len-1; i >= 0; i--) {

        // Take the values as ints, with 48 being the offset of ASCII 0
        signed char max_ch = max_str[i] - 48;
        signed char min_ch = 0;

        // If we are out of scope of 
        if (i - (signed int)len_diff >= 0)
            min_ch = min_str[i-len_diff] - 48;

        char sum = max_ch + min_ch + carry;

        if (sum >= 10) { 
            sum -= 10;
            carry = 1;
        } else 
            carry = 0;
       
        outstr[i] = sum + 48;
    }

    // If carry is still true
    if (carry == 1) {
        memmove(outstr+1, outstr, max_len);
        memset(outstr, '1', 1);
    }

    return outstr;
}

