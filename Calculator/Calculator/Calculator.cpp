#include<iostream>
#include<string>

using namespace std;

void menu()
{
	cout << " 1. Addition " << endl;
	cout << " 2. Subtracting " << endl;
	cout << " 3. Dividing (not by 0) " << endl;
	cout << " 4. Multiplying " << endl;
	cout << " 5. Power (DO NOT USE pow() function!) " << endl;
	cout << " 6. Remainder " << endl;
	cout << " 7. Square of a number " << endl;
	cout << " 0. Close Program " << endl;
	cout << " ================================================================ " << endl;
}

//calculations in void 


void addition(int number1, int number2)
{
	cout << " Enter first number: " << endl;
	cin >> number1;

	cout << " Enter second number: " << endl;
	cin >> number2;

	int total = number1 + number2;

	cout << " total is: " << total << endl;
}

void subtraction(int number1, int number2)
{
	cout << " Enter first number: " << endl;
	cin >> number1;

	cout << " Enter second number: " << endl;
	cin >> number2;

	int total = number1 - number2;

	cout << " total is: " << total << endl;
}

void division(float number1, float number2)
{
	cout << " Enter first number: " << endl;
	cin >> number1;

	cout << " Enter second number: " << endl;
	cin >> number2;

	int total = number1 / number2;

	if (number2 == 0)
	{
		cout << " cannot divide by 0 " << endl;
	}
	else
	{
		cout << " total is: " << total << endl;
	}
}

void multiplying(int number1, int number2)
{
	cout << " Enter first number: " << endl;
	cin >> number1;

	cout << " Enter second number: " << endl;
	cin >> number2;

	int total = number1 * number2;

	cout << " total is: " << total << endl;
}

void power()
{
	int exponent;
	float base, result = 1;

	cout << "Enter base and exponent respectively:  ";
	cin >> base >> exponent;

	cout << base << "^" << exponent << " = ";

	while (exponent != 0) {
		result *= base;
		--exponent;
	}

	cout << result << endl;
}

void remainder()
{
	int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
}

void square()
{
	int number1;
	int result;

	cout << " Enter a number to be squared " << endl;
	cin >> number1;

	for (int number1 = 0; number1 < 10; number1++)
	{
		result = number1 * number1;

		cout << number1 << " x " << number1 << " = " << result << endl;
	}
}

void selector()
{
	int number1 = 0, number2 = 0;
	int choices;


	menu();
	cin >> choices;



	switch (choices)
	{

	case 1:

		addition(number1, number2);

		break;

	case 2:

		subtraction(number1, number2);

		break;

	case 3:

		division(number1, number2);

		break;


	case 4:
	
		multiplying(number1, number2);

		break;
	
	case 5:
	
		power();

		break;

	case 6:

		remainder();

		break;

	case 7:

		square();

		break;
	
	case 0:

		return;




	default:
		
		cout << " wrong input " << endl;

		break;
		
	}
	selector();
}



int main()
{
	selector();






	system("pause");
	return 0;
}