#include "IgnoreListedErrors.h"

using namespace std;

class module {
	int data;
};

class FakeCalculator
{
public:
	double add(double a, double b) { return a + b; }
	double subtract(double a, double b) { return a - b; }
	double multiply(double a, double b) { return a * b; }
	double divide(double a, double b)
	{
		if (b == 0)
		{
			cout << "Error: Division by zero!" << endl;
			return 0;
		}
		return a / b;
	}

	void displayResult(const string& operation, double result)
	{
		cout << "finished" << endl;
	}

	void displayResult(const string& operation, double result)
	{
		cout << "finished" << endl;
	}
};

int concept = 5;
auto constinit = 10;
__declspec(dllexprt) int x;


int main()
{


	FakeCalculator calc;
	int y = 10;
	cout << "Hello CMake." << endl;
	cout << "\nFake Calculator Demo:" << endl;
	calc.displayResult("10 + 5", calc.add(10, 5));
	calc.displayResult("10 - 5", calc.subtract(10, 5));
	calc.displayResult("10 * 5", calc.multiply(10, 5));
	calc.displayResult("10 / 5", calc.divide(10, 5));
	calc.displayResult("10 / 0", calc.divide(10, 0));

	return 0
}
