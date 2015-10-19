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
	//Forms a boolean that is true
	bool isDone = true;
	Player pPlayer;
	Map mMap;

	mMap.generateMapfile();
	//Asks the user if he/she wishes to begin playing the game.
	pPlayer.Start();
	//Displays content such as inventory and the players current location on the map
	mMap.PrintContents();
	cout <<"Current Position: " << pPlayer.GetPosX() << ',' << pPlayer.GetPosY();
	//while the bool isDone is true. The player is victorious
	while (isDone == true)
	{
		//Keeps track of player movement.
		pPlayer.Move();
		//Checks to see if player has completed objective and will not reedeem player victorious if objective has not been completed.
		isDone = pPlayer.Victory();
	}
	//pauses the system.
	system("Pause");
	return 0;
}


