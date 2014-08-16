#include <iostream>

/*

FizzBuzz requirements

"Write a program that prints the numbers from 1 to 100.
But for multiples of three print “Fizz” instead of the number 
and for the multiples of five print “Buzz”. 
For numbers which are multiples of both three and five print “FizzBuzz”."

*/

int main(){

	for(int i = 1; i <= 100; i++){
		
		//print number if neither multiple of 3 or 5
		if(i % 3 != 0 && i % 5 != 0){
			std::cout << i;
		}
		else{
			//print Fizz if multple of 3
			if(i % 3 == 0){
				std::cout << "Fizz";
			}
			//print Buzz if multiple of 5
			if(i % 5 == 0){
				std::cout << "Buzz";
			}

		}
		//print the newline character
		std::cout << std::endl;

	}

}