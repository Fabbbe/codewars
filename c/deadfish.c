// Link to challenge: https://www.codewars.com/kata/51e0007c1f9378fa810002a9/
#include <stdlib.h>

int* parse(char* program) {
	int value = 0;
	char* c = program;
	
	// Calculate the output size
	size_t out_size = 0;
	for (size_t i = 0; program[i] != '\0'; ++i)
		if (program[i] == 'o')
			++out_size;
	int* out_arr = malloc(sizeof(int)*out_size);

	// Go through byte by byte until end of string
	int out_index = 0;
	for (; *c != '\0'; ++c) {
		switch (*c) {
		case 'i':
			value += 1;
			break;
		case 'd':
			value -= 1;
			break;
		case 's':
			value = value*value;
			break;
		case 'o':
			out_arr[out_index] = value;
			out_index += 1;
			break;
		default:
			break;
		}
	}
	return out_arr;
}
