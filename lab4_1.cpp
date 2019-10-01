

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	double PI = 3.14;
	double sum = 0, formula, x; //sum , formula, x in formula;
	int k, step_factorial, factorial; //k - varible in external loop,
									  //step_factorial - varible in internal loop 
	cout << "Input x = "; // aler about "input x"
	cin >> x; // input x
	for (k = 1; k <= 7; k++) {
		factorial = 1;
		for (step_factorial = 1; step_factorial <= k; step_factorial++)
			factorial *= step_factorial;
		formula = (factorial * cos(PI*k - x)) / (log10(x));
		sum += formula;
	}
	cout << "\nSum = " << sum;
	cin.get();
	cin.get();
}
