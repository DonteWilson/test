#include <iostream>
#include <string>
using namespace std;
//gives the player values
struct Player
{
	string name;
	int pos;
};
//class to represent the player Robot
class Robot
{
public:
	void PlayerMove();
	
private:
	int x;
	int y;
};
// ensure player movement
void PlayerMove()
{
	int up;
	int down;
	int left;
	int right;
}


// formation of grid
int main() {
	char grid[4][4] = { { '1','2','3','4' },
	{ '1','2','3','4' },
	{ '1','2','3','4' },
	{ '1','2','3','4' } };
	// displays the character within the grid
	char character = '*';
	//position of character.
	int position[2] = { 0,0};

	//function to show chracter movemnet
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
	}

	cout << "\nWhere would you like to move?"; cin.get();


	position[1] = 1;

	system("cls");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
		

	}
	system("pause");
	return 0;

}