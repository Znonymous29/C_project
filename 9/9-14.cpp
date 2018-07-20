#include<iostream>
using namespace std;

template<class T>
void myswap(T &x, T &y){
	T temp = x;
	x = y;
	y=temp;
}

template<class T>
void bubbleSort(T a[], int n){
	int i=n-1;
	bool isExchange=true;
	while(isExchange){
		isExchange=false;
		for (int j=0;j<i;j++){
			if(a[j+1]<a[j]) {
				myswap(a[j],a[j+1]);
				isExchange = true;
			}
		}
		cout << "ÔªËØµ÷Õû:"; 
		for(int s=0;s<n;s++){
			cout << a[s] << " ";
		}
		cout << endl;
	}
}

int main(){
	int data1[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	bubbleSort(data1,20);
	return 0;
}
