#include <iostream>

/*
	Create a MagicNumber class
		Has a number int
		Constructer(int myNumber)
		Setter method
		Getter method
	In main
		Create a MagicNumber pointer
		Create an instance using new with arg 7
		Print the MagicNumber's number
		Set number to 42
		Print the number
*/

using namespace std;

class MagicNumber
{
public:
	MagicNumber(int number);
	void setNumber(int number);
	int getNumber();
protected:
	int number;
};

MagicNumber::MagicNumber(int number){
	this->number = number;
}

void MagicNumber::setNumber(int number){
	this->number = number;
}
int MagicNumber::getNumber(){
	return this->number;
}

int main(){
	MagicNumber *myNum = new MagicNumber(7);
	
	cout << "Initial number is " << myNum->getNumber() << endl;

	myNum->setNumber(42);
	cout << "Changed to "<< myNum->getNumber() << endl;
}