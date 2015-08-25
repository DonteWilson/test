#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userName;
	string userPassword;
	int loginAttempt = 0;
    
		while (loginAttempt < 5)
		{
			cout << "Username:";
			cin >> userName;
			cout << "Password:";
			cin >> userPassword;

			if (userName == "usr" && userPassword == "P@55w0rd")
			{
				cout << " Welcome usr:\n";
				break;
			}
			else
			{
				cout << " Wrong username or Password. Try Again.\n" << '\n';
				loginAttempt++;
			}
		}
		if (loginAttempt == 5)
		{
			cout << "Too Many Fail Attempts -_-.";
		}
		
		system("pause");
		return 0;
}