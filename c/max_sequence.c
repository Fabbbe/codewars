// Link to challenge: https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/
#include <stddef.h>

int maxSequence(const int* array, size_t n) {
	int max_sequence = 0;

	// Three nested loops:
	// First one (i) keeps track of starting position
	// Second one (j) keeps track of ending position
	// Third one (k) is used to sum the array
	//
	// This will test all possible contiguous subsequences in the array
	for (int i = 0; i < n; ++i) {
		for (int j = n-1; j > i; --j) {
			int tmp_sequence = 0;
			for (int k = i; k <= j; ++k) {
				tmp_sequence += array[k];
			}

			if (tmp_sequence > max_sequence)
				max_sequence = tmp_sequence;
		}
	}
	
	return max_sequence;
}
