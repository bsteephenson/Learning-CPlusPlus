#include <iostream>

using namespace std;

template<class T>
struct node{
	node *next;
	T value;
};

int main(){
	node<int> *first, *second, *third;
	
	first = new node<int>;
	second = new node<int>;
	third = new node<int>;

	first->value = 1;
	second->value = 2;
	third->value = 3;

	first->next = second;
	second->next = third;

	cout << first->value << endl;
	cout << first->next->value << endl;
	cout << first->next->next->value << endl;

}