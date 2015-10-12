#include "Map.h"
#include "Player.h"
#include "CGrid.h"
#include <string>
#include <fstream>
using namespace std;
//Constructor for Map function
Map::Map()
{
	

}
//Deconstructor for Map function
Map::~Map()
{

}
void Map::generateMap()
{
	Cell iCell;

	int Temp = 4;

	int Size = Temp * Temp;

	Cell *Map;

	Map = new Cell[Size];

	int temp2 = sqrt(Size);
	
	int y = 0;

	for (int i = 0; i < Size; ++i)
	{
		int x = i % temp2;

		Map[i] = iCell.dCell(x, y);

		if (x == temp2 - 1)
		{
			y++;
		}
	}

	string f;
	
	ofstream File;

	File.open("Map.txt", ios_base::out);

	if (File.fail())
	{
		cout << "File Failed to Open\n";
	}
	else
	{
		for (int i = 0; i < Size; ++i)
		{
			int x = i % temp2;

			File << Map[i].GetPosY() << "," << Map[i].GetPosX() << "";

			if (x == temp2 - 1)
			{
				File << endl;
			}
		}
		File.close();
	}
	delete[]Map;

}

void Map::generateMapfile()
{
	string f;

	ifstream File;

	File.open("Map.txt", ios_base::in);

	if (File.fail())
	{
		cout << "File Failed to Open\n";
	}
	else
	{
		while (getline(File, f))
		{
			cout << f;
			cout << endl;
		}
	}
	cout << endl;

	File.close();
}

void Map::PrintContents()
{
	Player Eric;

	system("cls");

	generateMapfile();
	cout <<"Where do you want to move?\n";
	cout <<"Move North: W\n";
	cout <<"Move South: S\n";
	cout <<"Move East: D\n";
	cout <<"Move West: A\n";
	cout <<"Fire Bullet: Q\n\n";

	Eric.Satchel();
}