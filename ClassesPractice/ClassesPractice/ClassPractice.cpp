#include<iostream>
#include<string>
#include<ctime>

void RandomNum()
{
	srand(time(0));
	// produce number between 0 and 5 then add 1  

	std::cout << rand() % 6 + 1 << std::endl;
}

void Selector(int playerInput)
{
	std::cout << "0. Exit Game " << std::endl;
	std::cin >> playerInput;
}

int main()
{

	srand(time(0));
	// produce number between 0 and 5 then add 1  
	
	std::cout << rand() % 6 + 1 << std::endl;



	RandomNum();





	Selector();





	system("pause");
	return 0;
}