#include <stdlib.h>
#include <stdio.h>

char* dna_strand(const char* dna) {
	int length;
	char* ret_dna;
	
	// Read length of cstring
	for (length = 0; dna[length] != '\0'; ++length);

	// alloc to heap, could use alloca to allocate to stack
	ret_dna = (char*)malloc((length+1)*sizeof(char)); 
	
	for (int i = 0; i < length; ++i) {
		switch (dna[i]) {
			case 'C':
				ret_dna[i] = 'G';
				break;
			case 'G':
				ret_dna[i] = 'C';
				break;
			case 'T':
				ret_dna[i] = 'A';
				break;
			case 'A':
				ret_dna[i] = 'T';
				break;
		}
	}

	ret_dna[length] = '\0';

	return ret_dna;
}
