#include <stdlib.h>
#include <iostream>
using namespace std;

void printN(int n) {
	cout << endl << "N = " << n << endl;
}

void printSum(int test, int sum) {
	cout << "Test " << test << ": sum = " << sum << endl;
}

void testComplexities(int n) {
	
	int sum;
	
	// 1
	sum = 0;
	for (int i = 0; i < n; ++i)
		++sum;
	printSum(1, sum);

	// 2
	sum = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n;++j)
			++sum;
	printSum(2, sum);

	// 3
	sum = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n*n; ++j)
			++sum;
	printSum(3, sum);

	// 4
	sum = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < i; ++j)
			++sum;
	printSum(4, sum);


	// 5
	sum = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < i*i; ++j)
			for (int k=0;k<j;k++)
				++sum;
	printSum(5, sum);

	// 6
	sum = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < i * i; ++j)
			if (j % i == 0)
				for (int k = 0; k < j; k++)
					++sum;
	printSum(6, sum);


}

int main() {

	int n = 10;
	printN(n);
	testComplexities(n);

	n = 100;
	printN(n);
	testComplexities(n);

	//n = 1000;
	//printN(n);
	//testComplexities(n);


}