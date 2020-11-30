#include<iostream>
#include<string>
#include<ctime>

time_t init, final;
time_t dif;

void Selector()
{
	int PlayerChoice;

	std::cout << " 1. Multiplication " << std::endl;
	std::cout << " 0. Exit Application " << std::endl;

	std::cin >> PlayerChoice;
}

int main()
{
	Selector();

	time(&init);

	int playerAnswer;

	srand(time(0));
	int number1 = rand() % 10 + 1;
	int number2 = rand() % 10 + 1;

	std::cout << number1 << " * " << number2 << std::endl;

	std::cout << " Enter the correct answer " << std::endl;
	std::cin >> playerAnswer;

	if (playerAnswer == playerAnswer)
	{
		playerAnswer = number1 * number2;

		std::cout << " You have the correct answer " << std::endl;

		time(&final);

		dif = difftime(final, init);

		std::cout << " time it took " << dif << std::endl;
	}
	else
	{
		std::cout << " Wrong answer " << std::endl;
	}

	


	Selector();




	system("pause");
	return 0;
}