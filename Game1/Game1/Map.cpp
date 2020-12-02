#include "Map.h"


Map::Map(string mapName)
{

	LoadMap(mapName);


	/*for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (x == playerX && y == playerY)
			{
				map[x][y] = '@';
			}
			else if(x == 0 || x == 9 || y == 0 || y == 9)
			{
				map[x][y] = 'X';
			}
			else
			{
				map[x][y] = '.';
			}
		}
	}*/
}
void Map::LoadMap(string mapName)
{
	ifstream fileStream;
	fileStream.open(mapName + ".txt", ios::in);

	char mapTile;
	int x = 0, y = 0;

	while (!fileStream.eof()) {

		fileStream.get(mapTile);
		if (mapTile == 'S')
		{
			playerX = x;
			playerY = y;

			mapTile = '@';
		}

		map[x][y] = mapTile;

		x++;

		if (mapTile == '\n')
		{
			x = 0;
			y++;
		}
	}
}
void Map::Draw()
{
	system("CLS");
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			std::cout << map[x][y];

		}
		std::cout << std::endl;
	}
}

int Map::Move(int x, int y)
{
	if (map[x][y] == '.')
	{
		map[playerX][playerY] = '.';
		playerX = x;
		playerY = y;
		map[playerX][playerY] = '@';

		return 1;
	}
	else if (map[x][y] == 'G')
	{
		map[playerX][playerY] = '.';
		playerX = x;
		playerY = y;
		map[playerX][playerY] = '@';

		return 2;
	}

	return 0;
}
