// Link to challenge: https://www.codewars.com/kata/513e08acc600c94f01000001/
#include <stdio.h>

int rgb(int r, int g, int b, char *output) {
	if (r<0) r=0;
	if (r>255) r=255;
	if (g<0) g=0;
	if (g>255) g=255;
	if (b<0) b=0;
	if (b>255) b=255;
	
	sprintf(output, "%02X%02X%02X\0", r, g, b);
	return 0;
}
