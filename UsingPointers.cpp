#include <iostream>

/*

Goal

Create an int
Create a pointer to that int
Print out address of the int
Print the value of the int
Change the value of the int
Print the new value of the int

*/

using namespace std;

int main(){
	int var = 42;
	int *pointer;

	pointer = &var;

	cout << "Address of var : " << pointer << endl;
	cout << "Value of var : " << *pointer << endl;

	*pointer = 100;

	cout << "Address of var : " << pointer << endl;
	cout << "New Value of var : " << *pointer << endl;


}