#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void CreateS()
{
	ofstream file;
	file.open("Scores.txt", ios_base::out);

	if (file.fail())
	{
		cout << "Unable to Open  File" << endl;
	}
}

void Scores()
{
	bool results = true;
	ofstream file;
	
	string scores;
	file.open("Scores.txt", ios_base::app);

	cout << "What is the current score?\n" << endl;

	if (file.fail())
	{
		cout << "Unable to record score" << endl;
	}
	else
	{
		while (results == true)
		{
			getline(cin, scores);
			file << scores << endl;
		}
	}
	file.close();
	system("cls");

}
void SS()
{


}
