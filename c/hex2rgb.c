// Link to challenge: https://www.codewars.com/kata/5282b48bb70058e4c4000fa7/

#include <stdio.h>

typedef struct {
    int r, g, b;
} rgb;

rgb hex_str_to_rgb(const char *hex_str) {
	//  This is a really clean solution but working on a bit level might be 
	//  more optimized, but would loose out in readability
	rgb out;
	sscanf(hex_str, "#%2x%2x%2x", &out.r, &out.g, &out.b);
	return out;
}
