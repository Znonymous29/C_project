# include <iostream>
# include "LinkedList.h"
using namespace std;

int main(){
	linkedlist<int>a;
	linkedlist<int>b;
	cout << "����ListA�����ֵ��" << endl; 
	for (int i=0;i<5;i++){
		int item;
		cin >> item;
		a.insertRear(item);
	}
	a.reset();
	cout << "a:"; 
	while(!a.endOfList()){ 
		cout<<a.data()<<" "; 
		a.next(); 
	}
	cout<< endl;
	cout << "����ListB�����ֵ��" << endl; 
	for (int i=0;i<5;i++){
		int item;
		cin >> item;
		b.insertRear(item);
		a.insertRear(item);
	}
	b.reset();
	cout << "b:"; 
	while(!b.endOfList()){ 
		cout<<b.data()<<" "; 
		b.next(); 
	}
	a.reset();
	cout<< endl;
	cout << "a�в���b��:"; 
	while(!a.endOfList()){ 
		cout<<a.data()<<" "; 
		a.next(); 
	}
	
}
