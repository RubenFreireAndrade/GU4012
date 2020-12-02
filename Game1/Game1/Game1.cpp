#include<iostream>
#include<string>
#include <conio.h>
#include "Map.h"

using namespace std;

#define KEY_UP 72 
#define KEY_DOWN 80 
#define KEY_LEFT 75 
#define KEY_RIGHT 77


int main()
{
	int keyCode = 0;
	int mapNumber = 1;
	int moveResult = 0;

	Map currentMap = *new Map("map1");

	while (true)
	{
		moveResult = 0;
		currentMap.Draw();
		

		keyCode = _getch();

		switch (keyCode)
		{
		case KEY_RIGHT:

			moveResult = currentMap.Move(currentMap.playerX + 1, currentMap.playerY);

			break;

		case KEY_LEFT:

			moveResult = currentMap.Move(currentMap.playerX - 1, currentMap.playerY);

			break;

		case KEY_DOWN:

			moveResult = currentMap.Move(currentMap.playerX, currentMap.playerY + 1);

			break;

		case KEY_UP:

			moveResult = currentMap.Move(currentMap.playerX, currentMap.playerY - 1);

			break;

		default:
			break;
		}

		if (moveResult == 2)
		{
			mapNumber++;
			currentMap.LoadMap("map" + to_string(mapNumber));
		}
	}
















	system("pause");
	return 0;
}

