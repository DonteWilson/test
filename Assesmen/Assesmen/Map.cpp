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
//Creates grid for player to roam and explore the 4x4 grid.
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

		Map[i] = iCell.dCell(y, x);

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
	delete[] Map;

}
//Generates the map file from Map.txt and displays it onto the screen
void Map::generateMapfile()
{
	string f;

	ifstream File;

	File.open("Map.txt", ios_base::in);
	//If file fails to open then it will display the text represented in the cout.
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
//prints game contents that prompts player to chose the direction he wants to go in.
void Map::PrintContents()
{
	Player Eric;

	system("cls");
	//Generates map file above 2 
	generateMapfile();
	cout <<"Where do you want to move?\n";
	cout <<"Move North: W\n";
	cout <<"Move South: S\n";
	cout <<"Move East: D\n";
	cout <<"Move West: A\n";
	cout <<"Fire Bullet: Q\n\n";

	Eric.Satchel();
}