//////////////////////////////////
//Donte Wilson
//9/21/15
//Exercise - File I/O: Text Files.
//////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*1. Implement a program that will allow a user to view and alter a text file from the command
console. The program should do the following:
a. Open a text file called “MyLog.txt”, or create one if it doesn’t exist.
b. Ask the user if they want to display, write, or clear the file, or exit the program.
i. Display: Print the contents of the file to the console.
ii. Write: Ask the user for input and append whatever they write to the end of
the file.
iii. Clear: Erase the contents of the file by creating a new blank one in its place.
iv. Exit: Close the program.
c. After the user completes their selection, they should be prompted for what they
want to do next, for example they could continue to write more lines to the file.
d. The contents of the file should not be erased when the program starts, so something
entered previously should still be viewable if the program is closed and restarte*/

// Obtains input from the user to add to the file.
void Write()
{	

	bool stuff = true;
	ofstream file;

	string info;

	file.open("Mylog.txt", ios_base::app);

	cout << "Write what you want to add to the file" << endl;
	//Detects if file failed
	if(file.fail())
	{
		cout << "Unable to create file" << endl;
	}
	else
	{
		while (stuff == true)
		{
			//obtains input from the user
			getline(cin, info);
			file << info << endl;

			
		}
	}
	//Closes then clears the system
	cout << endl << endl;
	file.close();
	system("cls");
}
//creates a file by the user 
void Display()
{
	string d;
	ifstream file;
	
	file.open("MyLog.txt", ios_base::in);

	if (file.fail())
	{
		cout << "unable to read file" << endl;
	}
	else
	{
		cout << "This is whats in the file" << endl;
		while (getline(file, d))
		{
			cout << d;
		}
	}
	cout << endl << endl;
	file.close();
}

void Create()
{
	ofstream file;
	file.open("MyLog.txt");

	if (file.fail())
	{
		cout << "Unable to create file" << endl;
	}
	//closes current file
	file.close();

}
// Erases the contents of the file by creating a new blank one in its place.
void Clear()
{
	ofstream file;
	file.open("MyLog.txt", ios_base::out);

	if(file.fail())
	{
		cout << "Unable to Open File" << endl;


	}
	else
	{
		Create();
	}
	//closes the file
	file.close();
}
//Slection for the user to make
char select()
{
	char cselect;
	cout << "Make your selection" << endl;
	cout << "0.Display\n";
	cout << "1. Write\n";
	cout << "2. Create\n";
	cout << "3. Clear\n";
	//grabs input from the user.
	cin >> cselect;
	system("cls");
	return cselect;
}
// prompts the user to make a selection.
bool prompt()
{
	//fin stands for finish aka when user finishes making their selection.
	bool fin = true;
	//makes a switch statement for the user selection
	switch (select())
	{
	case '0':
		Display();
		break;
	case '1':
		Write();
		break;
	case '2':
		Create();
		break;
	case '3':
		Clear();
		break;
	case '4':
		fin = false;
		cout << "Exited";
		break;
	default:
			break;
	}
	//returns the data back to the system
	return fin;
}

int main()
{
	bool fin = true;

	while (fin == true)
	{
		fin = prompt();
	}



system("pause");
return 0;

	

}
