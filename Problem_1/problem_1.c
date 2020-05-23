#include <problem_1.h>

int getSumOfMultiples(int upperLimit) {
    int sum = 0;
    for (int i = 3; i < upperLimit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}