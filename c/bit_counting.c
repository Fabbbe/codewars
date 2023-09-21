// Link to kata: https://www.codewars.com/kata/526571aae218b8ee490006f4/

#include <stddef.h>
#include <limits.h>

size_t countBits(unsigned value) {
	unsigned int count = 0;

	for (size_t i = 0; i < sizeof(unsigned)*CHAR_BIT; i++) {
		 count += ((value & (1 << i)) != 0);
	}

	return count;
}
