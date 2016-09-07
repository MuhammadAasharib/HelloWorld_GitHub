//Ehsan and Aasharib.
#include <iostream>
#include <string>

//just wanted to add a comment!

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

	cout << "Enter the age" << endl;
	int age;
	cin >> age;

	cout << "your age is " << age;

	cout << "Now doing the conflicting" << endl;

	cout << "Now doing the double conf";
	//Prevents the program from closing automatically
	system("pause");

	return 0;
}
