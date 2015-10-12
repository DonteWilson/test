/*
Students create a top-down shooter retro style 2D game, demonstrating the ability to design,
plan and build a simple game, create and code “bug and error free” program and demonstrate an
understanding of C++ programming constructs, classes, functions and data structures.
*/
////////////////////////////////////////////////
//Donte Wilson
//9/29/15
//ADGP 105: Retro Game {110 hours}
////////////////////////////////////////////////
#include <iostream>
#include "Map.h"
#include "Player.h"
using namespace std;

int main()
{
	bool isDone = true;
	Player pPlayer;
	Map mMap;

	mMap.generateMapfile();
	pPlayer.Start();
	mMap.PrintContents();
	cout <<"Current Position: " << pPlayer.GetPosX() << ',' << pPlayer.GetPosY();

	while (isDone == true)
	{
		pPlayer.Move();

		isDone = pPlayer.Victory();
	}
	system("Pause");
	return 0;
}

