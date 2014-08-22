#include <iostream>

/*
	inline swap function that gets pointers to two ints
		swaps the two
	main
		create two ints
		print their values
		swap using swap function
		print theri values now
*/

using namespace std;

inline void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int first = 2;
	int second = 5;
	cout << "Ints values are " << first << " and " << second << endl;

	swap(first, second);

	cout << "Now the ints values are " << first << " and " << second << endl;
}