#include <problem_1.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int upperLimit = 1000;
    int sumOfMultiples = getSumOfMultiples(upperLimit);
    printf("The sum of multiples of 3 and 5 below %d is %d\n", 
        upperLimit, sumOfMultiples);
    return 0;
}