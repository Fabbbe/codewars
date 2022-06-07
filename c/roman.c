// Link to challenge: https://www.codewars.com/kata/51b66044bce5799a7f000003/
#include <string.h>

int from_roman(char* roman) {
	int out = 0;
	int last = 0;
	int roman_len = strlen(roman);

	// Maybe a recursive function?
	for (int i = roman_len; i >= 0; --i) {
		int curr;
		switch (roman[i]) {
			case 'I':
				curr = 1;
				break;
			case 'V':
				curr = 5;
				break;
			case 'X':
				curr = 10;
				break;
			case 'L':
				curr = 50;
				break;
			case 'C':
				curr = 100;
				break;
			case 'D':
				curr = 500;
				break;
			case 'M':
				curr = 1000;
				break;
			default:
				curr = 0;
				break;
		}
		
		// Branchless
		//out += (curr < last) * (-curr) + (curr >= last) * curr;
		
		if (curr < last)
			out -= curr;
		if (curr >= last)
			out += curr;

		last = curr;
	}
	return out;
}

void to_roman(int number, char* destination) {
	int digits[4];
	char* output = destination;
	char append_str[5];

	digits[0] = (number / 1000);
	digits[1] = (number / 100) % 10; // only get the digit
	digits[2] = (number / 10)  % 10;
	digits[3] = number         % 10;

	for (int i = 0; i < digits[0]; ++i) {
		*output = 'M';
		++output;
	}

	// Having this three times is not pretty, but I couldn't find a satisfying way to replace it
	switch (digits[1]) {
		case 1: 
			strcpy(append_str, "C");
			break;
		case 2:
			strcpy(append_str, "CC");
			break;
		case 3:
			strcpy(append_str, "CCC");
			break;
		case 4:
			strcpy(append_str, "CD");
			break;
		case 5:
			strcpy(append_str, "D");
			break;
		case 6:
			strcpy(append_str, "DC");
			break;
		case 7:
			strcpy(append_str, "DCC");
			break;
		case 8:
			strcpy(append_str, "DCCC");
			break;
		case 9:
			strcpy(append_str, "CM");
			break;
		default:
			append_str[0] = '\0';
			break;
	}
	strcpy(output, append_str);
	output += strlen(append_str);

	switch (digits[2]) {
		case 1: 
			strcpy(append_str, "X");
			break;
		case 2:
			strcpy(append_str, "XX");
			break;
		case 3:
			strcpy(append_str, "XXX");
			break;
		case 4:
			strcpy(append_str, "XL");
			break;
		case 5:
			strcpy(append_str, "L");
			break;
		case 6:
			strcpy(append_str, "LX");
			break;
		case 7:
			strcpy(append_str, "LXX");
			break;
		case 8:
			strcpy(append_str, "LXXX");
			break;
		case 9:
			strcpy(append_str, "XC");
			break;
		default:
			append_str[0] = '\0';
			break;
	}
	strcpy(output, append_str);
	output += strlen(append_str);

	switch (digits[3]) {
		case 1: 
			strcpy(append_str, "I");
			break;
		case 2:
			strcpy(append_str, "II");
			break;
		case 3:
			strcpy(append_str, "III");
			break;
		case 4:
			strcpy(append_str, "IV");
			break;
		case 5:
			strcpy(append_str, "V");
			break;
		case 6:
			strcpy(append_str, "VI");
			break;
		case 7:
			strcpy(append_str, "VII");
			break;
		case 8:
			strcpy(append_str, "VIII");
			break;
		case 9:
			strcpy(append_str, "IX");
			break;
		default:
			append_str[0] = '\0';
			break;
	}
	strcpy(output, append_str);
}
