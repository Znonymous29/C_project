#include <iostream>
#include <list>
#include <iterator>

using namespace std; 

template<class T>
void exchange(list<T>& l1, typename list<T>::iterator p1, list<T>& l2, typename list<T>::iterator p2){
	list<T>l3;
	l3.splice(l3.begin(),l1,p1,l1.end());
	l1.splice(l1.end(),l2,p2,l2.end());
	l2.splice(l2.end(),l3,l3.begin(),l3.end());
}

int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int b[]={9,10,11,12,13,14,15,16,17,18};
	list<int>l1(a,a+8);
	list<int>l2(b,b+10);
	
	cout << "l1 before exchange: ";
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	cout << "l2 before exchange: ";
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	
	list<int>::iterator iter1 = l1.begin();
	advance(iter1, 2);
	list<int>::iterator iter2 = l2.begin();
	advance(iter2, 4);
	exchange(l1,iter1,l2,iter2);
	cout << "l1 after exchange: ";
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	cout << "l2 after exchange: ";
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));

	return 0;
}
