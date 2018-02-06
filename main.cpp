#include <iostream>

#include "compute-e.hpp"
#include "compute-fib.hpp"
#include "compute-pi.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	if (argc == 3) {
		int n = stoi(argv[2]); // So stoi works I guess...
		string argument = argv[1];
		if (argument == "-fib") {
			cout << "Fibonacci at " << n << " is " << fib(n) << "\n";
		}
		if (argument == "-pi") {
			cout << "Pi until the " << n << "th digit is " << pi(n) << "\n";
		}
		if (argument == "-e") {
			cout.precision(10 + n);
			cout << "E calculated with " << n << " iterations is " << e(n) << "\n";
		}
	} else {
		// The previous comment did not format well
		cout << "--- Assign 2 Help ---\n";
		cout << "-fib [n] : Compute the fibonacci of [n]\n";
		cout << "-e [n] : Compute the value of 'e' using [n] iterations\n";
		cout << "-pi [n] : Display Pi to [n] digits\n";
	}
}
