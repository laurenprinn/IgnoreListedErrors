#include "IgnoreListedErrors.h"

using namespace std;

// This works in v140/v141 but fails in v143+ with C2143
class module {  // 'module' became a keyword in C++20
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
};

int concept_value = 5;  // 'concept' is a C++20 keyword - renamed to avoid conflict
auto co_await = 10;  // C2059 error appears in v140 as well


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

	return 0;
}
