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
//Destructor for Map function
Map::~Map()
{

}
//Creates grid for player to roam and explore the 4x4 grid.
void Map::generateMap()
{
	Cell iCell;
	//Sets Temp variable to equal 4
	int Temp = 4;
	//Sets size Temp times Temp which will euqal 16.
	int Size = Temp * Temp;
	//Creates a pointer for Map
	Cell *Map;
	//Sets the map pointer to a new allocated array of memory
	Map = new Cell[Size];
	//Makes temp2 the square root of the size variable.
	int temp2 = sqrt(Size);
	//Sets y to the value of 0d
	
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
	//Creates a string called f. The f represents File.
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
			//Gives the map its values
			int x = i % temp2;

			File << Map[i].GetPosY() << "," << Map[i].GetPosX() << "";

			if (x == temp2 - 1)
			{
				File << endl;
			}
		}
		//closes the file
		File.close();
	}
	//removes the allocated memory
	delete[] Map;

}
//Generates the map file from Map.txt and displays it onto the screen
void Map::generateMapfile()
{
	//Creates a string called f representing File.
	string f;

	ifstream File;

	File.open("Map.txt", ios_base::in);
	//If file fails to open then it will display the text represented in the cout.
	if (File.fail())
	{
		//Displays on to screen if file failed to open correctly.
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
	//Closes the File if it failed to open/
	File.close();
}
//prints game contents that prompts player to chose the direction he wants to go in.
void Map::PrintContents()
{
	Player pPlayer;

	system("cls");
	//Generates map file above 2 
	generateMapfile();
	//Prompts the user chose a location to move in.
	cout <<"Where do you want to move?\n";
	cout <<"Move North: W\n";
	cout <<"Move South: S\n";
	cout <<"Move East: D\n";
	cout <<"Move West: A\n";
	cout <<"Fire Bullet: Q\n\n";

	pPlayer.Satchel();
}