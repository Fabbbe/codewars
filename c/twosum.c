// Link to solution: https://www.codewars.com/kata/52c31f8e6605bcc646000082/
#include <stdbool.h>

void twoSum(unsigned count, const int numbers[count], int target, 
		unsigned *index1, unsigned *index2) {
	// assign to the index1 and index2 pointers
	*index1 = *index2 = 0;

	bool found = false;

	for (int i = 0; i < count && !found; ++i) {
		for (int j = 0; j < count && !found; ++j) {
			if (numbers[i] + numbers[j] == target && i != j) {
				*index1 = i;
				*index2 = j;
				found = true;
			}
		}
	}
}
