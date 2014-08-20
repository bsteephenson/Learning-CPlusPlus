#include <iostream>

/*

Create a MagicNumber struct which has a number int

Create an instance of MagicNumber called FortyTwo
Create a pointer to FortyTwo

Use the -> syntax to set the number to 42
Use the -> syntax to print the number inside FortyTwo

Create another MagicNumber seven using a pointer and new
Use the -> syntax to set the number to 7
Use the -> syntax to print the number inside seven

*/

using namespace std;

struct MagicNumber{
	int number;
};

int main(){
	MagicNumber fortyTwo;
	MagicNumber *pointer = &fortyTwo;

	pointer->number = 42;
	cout << "The magic number is " << pointer->number << endl;

	MagicNumber *seven = new MagicNumber;
	seven->number = 7;
	cout << "The other magic number is " << seven->number << endl;
}