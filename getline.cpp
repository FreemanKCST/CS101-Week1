#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	cout << "Please enter your first and last name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	cin >> city;

	//getline(cin, city);
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}