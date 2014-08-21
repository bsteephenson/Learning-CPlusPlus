#include <iostream>

/*
Create an int array of 100 elements
Go through each element assigning the values 1 to 100
Add each element to a sum int
Print out the sum of the elements of the array
*/

using namespace std;

int main(){
	int array[100];
	
	for(int i = 0; i < 100; i++){
		array[i] = i + 1;
	}

	int sum = 0;

	for(int i = 0; i < 100; i++){
		sum += array[i];
	}

	cout << "The sum of the integers from 1 to 100 is " << sum << endl;

}