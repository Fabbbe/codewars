// Link to kata: https://www.codewars.com/kata/514b92a657cdc65150000006/

int solution(int number) {
    // Sum all numbers less than number that are multiples of 3 *or* 5
    int sum = 0;

    for (int i = 0; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}
