#include <iostream>


#include "funcs.h"

int main() {

	std::cout << "isDivisibleBy(100, 25): " << isDivisibleBy(100, 25) << std::endl;

	std::cout << "isPrime(11): " << isPrime(11) << std::endl;

	std::cout << "nextPrime(20): " << nextPrime(20) << std::endl;

	std::cout << "countPrimes(4, 40): " << countPrimes(4, 40) << std::endl;

	std::cout << "isTwinPrime(29): " << isTwinPrime(29) << std::endl;

	std::cout << "nextTwinPrime(19): " << nextTwinPrime(19) << std::endl;

	std::cout << "largestTwinPrime(1, 31): " << largestTwinPrime(1, 31) << std::endl;

	return 0;
}
