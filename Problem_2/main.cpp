#include <cstdint>
#include <iostream>
#include "Problem_2.h"

int main() {
    uint64_t upperLimit = 4000000;
    std::cout << "The sum of the even fibonnaci numbers below ";
    std::cout << unsigned(upperLimit) << " is " << unsigned(evenFibSum(upperLimit)) << "." << std::endl;
    return 0;
}