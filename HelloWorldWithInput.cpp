#include <iostream>
#include <string>
/*

Hello World with input

Ask for a name and prints out "Hello [Name]"

*/

int main(){
	
	std::string name;

	//Ask for name

	std::cout << "Enter your name : ";

	//Get name

	std::cin >> name;

	//Print out Hello [name]

	std::cout << std::endl;
	std::cout << "Hello " << name << std::endl;
}