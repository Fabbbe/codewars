// Link to ćhallenge: https://www.codewars.com/kata/5266876b8f4bf2da9b000362/
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* likes(size_t n, const char* const names[n]) {
	size_t string_length = 0;
	char* outstring;

	for (unsigned int i = 0; i < n && i < 3; ++i)
		string_length += strlen(names[i]);
	
	string_length += 32; // Add some margin for the extra text

	outstring = malloc(sizeof(char)*string_length);

	switch (n) {
		case 0:
			sprintf(outstring, "no one likes this");
			break;
		case 1:
			sprintf(outstring, "%s likes this", names[0]);
			break;
		case 2:
			sprintf(outstring, "%s and %s like this", names[0], names[1]);
			break;
		case 3:
			sprintf(outstring, "%s, %s and %s like this", names[0], names[1], names[2]);
			break;
		default:
			sprintf(outstring, "%s, %s and %lu others like this", names[0], names[1], (n-2));
			break;
	}
	return outstring;
}
