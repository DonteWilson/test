#include "Player.h"
#include "Map.h"
#include "CGrid.h"
//Constructor for player
Player::Player()
{
	m_x = 0;
	m_y = 0;
}
//Deconstructor for player
Player::~Player()
{

}
//Creates a struct for SuitCase and it contains whats inside 
struct SuitCase
{
	//creates a string name for your suitcase
	string iName;
	//Displays the amount of items within the suitcase
	int iAmount;
};
//Contains an array to contains a suitcase that contains a Pistol with one bullet and it will contain another item in the future.
SuitCase iCase[2] = { {"Pistol", 1},{"Wife", 0} };
//Gets positon of player at x
int Player::GetPosX()
{
	//returns the m_x value
	return m_x;
}
//Gets position of player at y
int Player::GetPosY()
{
	//returns the m_y value
	return m_y;
}
//Sets the position for the player
void Player::SetPos(int a_px, int a_py)
{
	m_x = a_px;

	m_y = a_py;
}
//Function that enables the player to move around the map
void Player::Move()
{
	Map mMap;
	Cell cCell;
	Player pPlayer;
	//keeps track of user input
	char uInput;
	cout << endl;

	cin >> uInput;
	//switch statement for the choices the character makes to move.
	switch (uInput)
	{
	//Actions that would happen if player where to move with w. The program will notify the player  if he cant go in that direction.
	case 'w':
	{
		SetPos(m_x, m_y - 1);

		mMap.PrintContents();

		if (m_y < 0)
		{
			SetPos(m_x, m_y = 0);
			cout << "Cannot go in that direction\n";
		}
		//Calls a function for a Landmine
		cCell.Mine(GetPosY(), GetPosX());
		//Calls a function for the Theif
		cCell.Thief(pPlayer, GetPosY(), GetPosX());
		//Calls a function for players Wife
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		//Displays Current Position of player
		cout << "Current Position:" << GetPosY() << ',' << GetPosX() << endl;	
		break;
	}
	//Actions  that would happen if player chose to hit s. The program will notify the player if he cant go in that direction.
	case 's':
	{
		SetPos(m_x, m_y + 1);

		mMap.PrintContents();

		if (m_y > 3)
		{
			SetPos(m_x, m_y = 3);
			cout << "Cannot go in that direction\n";
		}
		//Calls a function for a Landmine
		cCell.Mine(GetPosY(), GetPosX());
		//Calls a function for the Theif
		cCell.Thief(pPlayer, GetPosY(), GetPosX());
		//Calls a function for the players Wife
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		//Displays Current Position of player
		cout <<"Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if player chose to hit a. The program will notify the player if he cant go in that direction.
	case 'a':
	{
		SetPos(m_x - 1, m_y);
		mMap.PrintContents();
		if (m_x < 0)
		{
			SetPos(m_x = 0, m_y);
			cout <<"Cannot go in that direction\n";
		}

		cCell.Mine(GetPosY(), GetPosX());
		cCell.Thief(pPlayer, GetPosY(), GetPosX());
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		cout <<"Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if the player chose to hit d. The program will notify the player if he cant go in that direction.
	case 'd':
	{
		SetPos(m_x + 1, m_y);
		mMap.PrintContents();

		if (m_x > 3)
		{
			SetPos(m_x = 3, m_y);
			cout << "Cannot go in that direction\n";
		}
		cCell.Mine(GetPosY(), GetPosX());
		cCell.Thief(pPlayer, GetPosY(), GetPosX());
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		//Displays players current position to the screen.
		cout << "Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if the player chose to hit Q. This will be the action to attack the theif.
	case 'q':
	{
		Shoot();
		break;

	}
	default:
		cout << "Invalid Choice" << endl;
		break;
	};
}
//a boolean that displays if the theif is alive or not.
bool a_Thief = true;
//Functions that idenitfies if the player managed to kill the theif.
bool Player::Shoot()
{
	Cell Thief;
	Map mMap;
	//Checks the players position and checks to see if the player has an item in his inventory.
	if (((((GetPosX() == 1 && GetPosY() == 2) &&
		(Thief.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 3 && GetPosY() == 2) &&
		(Thief.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 2 && GetPosY() == 1) &&
		(Thief.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 2 && GetPosY() == 3) &&
		(Thief.GetAlive() == true) && (iCase[0].iAmount == 1)))))
	{
		//Theif alive equals false if what above is true
		a_Thief = false;
		//Shows that the player used his item and now its value is set to 0 (empty)
		iCase[0].iAmount--;

		mMap.PrintContents();

		//Indication of killing the theif.
		cout << "You shot the theif.\n";
	}
	return a_Thief;

}
//Function that displays player inventory 
void Player::Satchel()
{
	cout << "Items on Satchel:\n";

	for (int i = 0; i < 2; ++i)
	{
		cout << iCase[i].iName <<" x "<< iCase[1].iAmount << endl;
	}
}
//prompts the user to the start screen and informs the user if he wants to continue or not.
void Player::Start()
{
	Map mMap;
	char uInput;
	cout << "Welcome to Retro Madness\n";
	cout << "Would you like to continue? y/n";
	cin >> uInput;

	//Checks to see if user inputed Y or y. Any other variable will be invalid.
	if (uInput == 'Y' || uInput == 'y')
	{
		//Clears the system after the users decision is made
		system("cls");
		
	}
	//Checks to see if user inputed N or n. Any other variable will be invalid.
	else if (uInput == 'N' || uInput == 'n')
	{
		system("cls");
		//Displays "You have exited the game" if user choses N or n.
		cout << "You have exited the game\n";
		exit(1);
	}
	else
	{
		//Displays Invalid choice if anything other than Y,y,N,n was inputed by the user
		cout <<"Invalid Choice game will begin anyways.\n";
		system("pause");
		system("cls");
	//ISSUE: Couldnt really figure out a way to make it to where it says invalid entry and then it restates the question. Its not major, but
	//I found a way around it.
		
	}
}
//Function that identifies the location of the players wife and then notifies the player that he has found his wife.
void Player::fWife(int &a_rfX, int &a_rfY)
{
	Map mMap;

	if ((a_rfX == 3 && a_rfY == 3) && (iCase[1].iAmount == 0))
	{
		iCase[1].iAmount++;
		mMap.PrintContents();
		cout << "You've located your Wife\n";
	}
}
//A boolean statement that identifies if the player made it back to position 0,0 with his wife.
bool Player::Victory()
{
	//Checks to see if player has obtained his Wife, checks to see if it is true, if not dVictory will equal false
	bool dVictory = true;
	if (((GetPosX() == 0 && GetPosY() == 0) &&
		iCase[1].iAmount == 1))
	{
		cout << "You brought your wife back to safety\n";

		dVictory = false;
	}
	return dVictory;
}