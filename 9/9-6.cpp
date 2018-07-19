#include<iostream>
#include "LinkedList.h"
using namespace std;

template<class T>
class orderList:public linkedlist<T> {
	public:
		void insert(const T&item);
};

template<class T>
void orderList<T>::insert(const T&item){
	this->reset();
	while(!this->endOfList()){
		if(item<this->data()){
			break;
		}
		this->next();
	}
	this->insertAt(item);
}

int main(){
	orderList<int>a;
	orderList<int>b;
	cout << "�������A�����������"<<endl;
	for (int i=0;i<5;i++){
		int item;
		cin >> item;
		a.insert(item);
	}
	cout<<"��A��";
	a.print();
	cout << "�������B�����������"<<endl;
	for (int i=0;i<5;i++){
		int item;
		cin >> item;
		b.insert(item);
		a.insert(item);
	}
	cout<<"��B��";
	b.print();
	cout<<"��A��";
	a.print();			
	return 0;
}
