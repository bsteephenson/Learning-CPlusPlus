#include <iostream>

/*
	a recursive factorial function
*/

using namespace std;

inline int factorial(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}

int main(){
	int number = 5;
	cout << number << " factorial is equal to " << factorial(number) << endl;
}