#include <iostream>

using namespace std;

//-----------------------
//ArrayList<T> interface
//-----------------------

template <class T>
class ArrayList{
	public:
		ArrayList();
		void add(T item);
		void removeLastElement();
		T get(int index);
		int length();
	private:
		int size;
		T *array;
};

//----------------------------
//ArrayList<T> implementation
//----------------------------

template <class T>
ArrayList<T>::ArrayList(){
	this->size = 0;
}

template <class T>
void ArrayList<T>::add(T item){
	if(this->size == 0){
		this->array = new T[1];
		this->array[0] = item;
		size = 1;
	}
	else{
		T *tempArrPoint = new T[this->size + 1];
		for(int i = 0; i < size; i++){
			tempArrPoint[i] = this->array[i];
		}
		tempArrPoint[size] = item;
		delete[] this->array;
		this->array = tempArrPoint;
		this->size = this->size + 1;
	}
}

template<class T>
void ArrayList<T>::removeLastElement(){
	if(size == 0){
		return;
	}
	else{
		T *tempArrPoint = new T[this->size - 1];
		for (int i = 0; i < size-1; ++i){
			tempArrPoint[i] = this->array[i];
		}
		delete[] this->array;
		this->array = tempArrPoint;
		this->size = this->size - 1;
	}
}

template<class T>
T ArrayList<T>::get(int index){
	return this->array[index];
}

template <class T>
int ArrayList<T>::length(){
	return this->size;
}

//------------------------
//Test the ArrayList<int>
//------------------------

int main(){
	ArrayList<int> *list = new ArrayList<int>();

	cout << "Created an ArrayList<int>" <<endl;

	list->add(1);
	list->add(2);
	list->add(3);

	cout << "Added 3 elements. Length is now " << list->length() << endl;

	cout << list->get(0) << " ";
	cout << list->get(1) << " ";
	cout << list->get(2) << " " << endl; 

	list->removeLastElement();

	cout << "Removed the last element. Length is now " << list->length() << endl;

	cout << list->get(0) << " ";
	cout << list->get(1) << " ";
	cout << list->get(2) << " " << endl;

}