#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	double PI = 3.14;
	double sum = 0, formula, k; //sum , formula, k = quantity;
	int i, step_factorial, factorial; //k - varible in external loop,
									  //step_factorial - varible in internal loop 
	cout << "Input k = "; // aler about "input x"


	cin >> k; // input x
	for (i = 1; i <= k; i++) {
		factorial = 1;
		for (step_factorial = 1; step_factorial <= i + 1; step_factorial++)
			factorial *= step_factorial;

		if (i != 2) {
			formula = (pow(-1, i) * factorial) / ((pow(i, 2) - 4));
		}
		sum += formula;
		cout << formula << "\n";
	}
	cout << "\nSum = " << sum;
	cin.get();
	cin.get();
}