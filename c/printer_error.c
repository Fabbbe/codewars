// Link to challenge: https://www.codewars.com/kata/56541980fa08ab47a0000040
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* printerError(char* s) {
	int error_count = 0;
	int s_len = strlen(s);
	char* result_string = malloc(16*sizeof(char)); 

	for (int i = 0; i < s_len; ++i) {
		if (s[i] < 'a' || s[i] > 'm') {
			++error_count;
		}
	}

	sprintf(result_string, "%d/%d", error_count, s_len);

	return result_string;
}
