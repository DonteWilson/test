#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
	

	stack <string> role;
	stack<int> rstack;
	
	for (int i = 0; i < 5; i++) rstack.push(i);
	cout << "1.Size: " << rstack.size() << '\n';
	rstack.pop();
	cout << "2.Size: " << rstack.size() << '\n';
	rstack.pop();
	cout << "3.Size: " << rstack.size() << '\n';
	rstack.pop();
	cout << "4.Size: " << rstack.size() << '\n';
	rstack.pop();
	cout << "5.Size: " << rstack.size() << '\n';

	

	role.push("Top");
	role.push("Jungle");
	role.push("Mid");
	role.push("Adc");
	role.push("Support");
	cout << "\nThe worst role is " << role.top() << endl;
	role.pop();
	cout << "The best role is " << role.top() << endl;
	role.pop();
	cout << "The coolest role is " << role.top() << endl;
	role.pop();
	cout << "The lamest role is " << role.top() << endl;
	


	int sum(0);

	for (int i = 1; i <= 5; i++) rstack.push(i);

	while (!rstack.empty())
	{
		sum = rstack.top();
		rstack.pop();
	}

	cout << "\nRoles Left: " << sum << '\n';

	cin.get();
	system("pause");
	return 0;
}