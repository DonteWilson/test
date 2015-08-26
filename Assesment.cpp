#include <iostream>
#include <string>
using namespace std;

void convertToASCII(string letter)
{
	for (int i = 0; i < letter.length(); i++)
	{
		char x = letter.at(i);
		cout << int(x) << endl;
	}
}

int main()
{
	string textInput;
	cout << "Converts into ASCII: ";
	std::getline(cin, textInput);
	convertToASCII(textInput);
	system("pause");
	system("cls");
	return 0;
}