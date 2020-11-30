#include<iostream>
#include<string>

using namespace std;

int whereAmi;

void PlainField()
{
	whereAmi = 1;
	cout << " You are in plain field " << endl;
}

void Menu()
{
	cout << " What do you want to do? " << endl;
	cout << " ========================================== " << endl;

	cout << " 1. Plain Field " << endl;
	cout << " 2. Spaceship " << endl;
	cout << " 3. Sky City " << endl;
	cout << " 4. Forest " << endl;
	cout << " 5. Village " << endl;
	cout << " 0. Exit Game " << endl;
}

void Spaceship()
{
	whereAmi = 2;
	cout << " You are in the Spaceship " << endl;
}

void SkyCity()
{
	whereAmi = 3;
	cout << " You have landed on Sky City " << endl;
}

void Forest()
{
	whereAmi = 4;
	cout << " You are in the Forest " << endl;
}

void Village()
{
	whereAmi = 5;
	cout << " You have entered the Village " << endl;
}

void Selector()
{

	int choices;


	Menu();
	cin >> choices;

	switch (choices)
	{

	case 1:
		
		PlainField();

		break;

	case 2:

		Spaceship();

		break;

	case 3:

		if (whereAmi == 2)
		{
			SkyCity();
		}
		else
		{
			cout << " Go to Spaceship first " << endl;
		}

		break;

	case 4:

		Forest();

		break;

	case 5:

		Village();

		break;

	case 0:

		return;

	default:

		cout << " Wrong input " << endl;

		break;
	}
	Selector();
}



int main()
{
	whereAmi = 0;

	Selector();
	
		
	


















	system("pause");
	return 0;
}