// Link to challenge: https://www.codewars.com/kata/529bf0e9bdf7657179000008/
#include <stdbool.h>

bool validSolution(unsigned int board[9][9]){
	// Check rows
	for (int i = 0; i < 9; ++i) {
		char digits[9] = {0}; // init array with 0s
		for (int j = 0; j < 9; ++j) {
			// Check so that everything is in the given bounds 
			if (board[i][j] > 9 || board[i][j] < 1)	
				return false;

			if (!digits[board[i][j]-1])
				digits[board[i][j]-1] = 1;
			else 
				return false;
		}
	}

	// Check columns
	for (int i = 0; i < 9; ++i) {
		char digits[9] = {0};
		for (int j = 0; j < 9; ++j) {
			if (!digits[board[j][i]-1])
				digits[board[j][i]-1] = 1;
			else 
				return false;
		}
	}

	// Check sqares
	for (int i = 0; i < 9; ++i) {
		char digits[9] = {0}; 
		for (int j = 0; j < 9; ++j) {
			if (!digits[board[i/3*3+j/3][j%3+i%3*3]-1])
				digits[board[i/3*3+j/3][j%3+i%3*3]-1] = 1;
			else
				return false;
		}
	}

	return true;
}
