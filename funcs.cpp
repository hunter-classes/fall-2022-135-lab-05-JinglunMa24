#include <iostream>
#include "funcs.h"

// add functions here

// TASK A
bool isDivisibleBy(int n, int d) {
	if (n % d == 0) {
		return true;
	}
	return false;
}

// TASK B
bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return false;;
	}

	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}


// TASK C
int nextPrime(int n) {
	bool prime = false;
	n += 1;
	while (prime == false) {
		if (isPrime(n) == false) {
			n++;
		}
		else {
			prime = true;
		}
	}
	return n;
}

// TASK D
int countPrimes(int a, int b) {
	int count = 0;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			count++;
		}
	}
	return count;
}

// TASK E
bool isTwinPrime(int n) {
	if ((isPrime(n-2) || isPrime(n+2)) && isPrime(n)) {
		return true;
	}
	return false;
}

// TASK F
int nextTwinPrime(int n) {
	bool prime = false;
	n += 1;
	while (prime == false) {
		if (isTwinPrime(n) == false) {
			n++;
		}
		else {
			prime = true;
		}
	}
	return n;
}

// TASK G
int largestTwinPrime(int a, int b) {
	for (int i = b; i >= a; i--) {
		if (isTwinPrime(i)) {
			return i;
		}
	}
	return -1;
}