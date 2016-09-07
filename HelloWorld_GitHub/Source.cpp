#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Hello GitHub World" << endl;
	

	string name;

	cout << "What is your name??"<< endl;
	getline(cin,name);

	cout << name;

	cout << "Now tell me your age" << endl;
	int age;
	cin >> age;

	cout << "Your age is " << age << endl;
	system("pause");

	return 0;
}