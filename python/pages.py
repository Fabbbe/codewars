# Link to challenge: https://www.codewars.com/kata/622de76d28bf330057cd6af8
import math

def amount_of_pages(summary):
    i = 1
    test_sum = 0

    while test_sum < summary:
        test_sum += int(math.log10(i))+1
        i += 1
    
    return i-1
