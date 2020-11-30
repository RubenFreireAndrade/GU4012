#include<iostream>
#include<string>
#include <conio.h>

using namespace std;

#define KEY_UP 72 
#define KEY_DOWN 80 
#define KEY_LEFT 75 
#define KEY_RIGHT 77

int playerX = 1, playerY = 1;

char map[10][10] = {
	{'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
	{'X', '@', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', '.', '.', '.', '.', '.', '.', '.', '.', 'X'},
	{'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
};

int main()
{
	int keyCode = 0;

	while (true)
	{
		system("CLS");
		for (int y = 0; y < 10; y++)
		{
			for (int x = 0; x < 10; x++)
			{
				cout << map[y][x];

			}
			cout << endl;
		}
		

		keyCode = _getch();

		switch (keyCode)
		{
		case KEY_RIGHT:

			if (map[playerY][playerX+1] == '.')
			{
				map[playerY][playerX] = '.';
				playerX++;
				map[playerY][playerX] = '@';
			}

			break;

		case KEY_LEFT:

			if (map[playerY][playerX - 1] == '.')
			{
				map[playerY][playerX] = '.';
				playerX--;
				map[playerY][playerX] = '@';
			}

			break;

		case KEY_DOWN:

			if (map[playerY + 1][playerX] == '.')
			{
				map[playerY][playerX] = '.';
				playerY++;
				map[playerY][playerX] = '@';
			}

			break;

		case KEY_UP:

			if (map[playerY - 1][playerX] == '.')
			{
				map[playerY][playerX] = '.';
				playerY--;
				map[playerY][playerX] = '@';
			}

			break;

		default:
			break;
		}
	}
















	system("pause");
	return 0;
}

