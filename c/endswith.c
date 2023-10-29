// Link to kata: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending) {
    // Checks if `string` ends with `ending`

    unsigned int full_len = strlen(string);
    unsigned int end_len = strlen(ending);

    // If the end is larger than the full string
    if (end_len > full_len) return false;

    for (unsigned int i = 0; i != end_len; ++i) {
        if (string[i + full_len-end_len] != ending[i]) return false;
    }
    // If there's a full match
    return true;
}

