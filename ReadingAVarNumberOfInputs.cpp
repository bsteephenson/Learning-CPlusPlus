#include <iostream>

/*

Reads in a varibale number of inputs and prints out the sum

To use, run the program. 
When it asks for numbers, press enter after each number. 
To get the sum, type ctrl-D

*/

int main(){
	
	int sum = 0;
	int input;

	//ask for input

	std::cout << "Enter the numbers" << std::endl;

	//foreach input

	while(std::cin >> input){
		sum = sum + input;
	}

	std::cout << std::endl;
	std::cout << sum;

}