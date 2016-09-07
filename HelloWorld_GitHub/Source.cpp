#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Hello GitHub World" << endl;
	

	string name;

	cout << "What is your name??"<< endl;
	getline(cin,name);
	
	cout << name;

	cout << "Enter the address" << endl;
	string address;
	getline(cin, address);

	system("pause");

	return 0;
}