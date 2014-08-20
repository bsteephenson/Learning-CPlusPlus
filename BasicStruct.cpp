#include <iostream>
#include <string>

/*
Goal

Create a User struct that has a username, password, and favoriteColor

Create an instance of User struct
Set username to Benji_St
Set password to password
Set favorite color to green

Print out username, password, and favoriteColor of 

*/


using namespace std;

struct User{
	string username;
	string password;
	string favoriteColor;
};

int main(){
	User benji;

	benji.username = "Benji_St";
	benji.password = "verySecurePassword";
	benji.favoriteColor = "green";

	cout << "Username is " << benji.username << endl;
	cout << "Password is " << benji.password << endl;
	cout << "Favorite color is " << benji.favoriteColor << endl;

}