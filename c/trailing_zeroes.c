// link to challenge: https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/

#include <math.h>

long zeros(long n) {
	long k = (long)floor(log((double)n)/log(5.0));
	long sum = 0;
	for (long i = 1; i <= k; i++) {
		sum += (long)floor((double)n/pow(5.0, (double)i));
	}
	return sum;
}
