#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Map
{

public:

	Map(string mapName);

	void Draw();

	void LoadMap(string mapName);

	int Move(int x, int y);
	
	int playerX;
	int playerY;

private:

	char map[10][10];

	
};

