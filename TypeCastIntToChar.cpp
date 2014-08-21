#include <iostream>

/*
Loop through ints 0 to 127
Cast each into a char
Print each char
*/

using namespace std;
int main(){
	for (int i = 0; i < 128; ++i)
	{
		cout << i << "\t" <<(char)i << endl;
	}
}