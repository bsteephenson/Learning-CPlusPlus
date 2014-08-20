#include <iostream>

/*
Goal

create an int pointer
create an int using new
print the address of the int
print the value of the int
change the value
print the address of the int
print the value of the int
delete the int
print the address of the int
print the value of the int

*/

using namespace std;

int main(){
	
	int *pointer = NULL;
	pointer = new int;

	cout << "Address of the int :" << pointer << endl;
	cout << "Value of the int :" << *pointer << endl;

	*pointer = 42;
	cout << "Address of the int :" << pointer << endl;
	cout << "Value of the int :" << *pointer << endl;


	delete pointer;

	cout << "Address of the int :" << pointer << endl;
	cout << "Value of the int :" << *pointer << endl; // still prints out 42.. Maybe the memory is only freed upon demand

	pointer = NULL; //point to null for good measure
	
}