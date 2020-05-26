#include <algorithm>
#include "Problem_2.h"

uint64_t evenFibSum(uint64_t upperLimit) {
    uint64_t fib_n = 1;
    uint64_t fib_n1 = 1;
    uint64_t sum = 0;
    while (fib_n1 <= upperLimit) {
        std::swap(fib_n, fib_n1);
        fib_n1 += fib_n;
        if (fib_n1 % 2 == 0) {
            sum += fib_n1;
        }
    }
    return sum;
}