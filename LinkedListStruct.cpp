#include <iostream>

using namespace std;

struct node{
	node *nextNode;
	int value;
};

int main(){
	node *first = new node;
	first->value = 111;

	node *second = new node;
	second->value = 222;

	first->nextNode = second;

	cout << "First val is " << first->value << endl;
	cout << "Second val is " << first->nextNode->value << endl;

	node *middle = new node;
	middle->value = 115;

	cout << "Insert" << endl;

	middle->nextNode = first->nextNode;
	first->nextNode = middle;

	cout << "First val is " << first->value << endl;
	cout << "Middle val is " << first->nextNode->value << endl;
	cout << "Last val is " << first->nextNode->nextNode->value << endl;

}