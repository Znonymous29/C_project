#include<iostream>
using namespace std;

template<class T>
void myswap(T *x, T *y){
	T temp = *x;
	*x = *y;
	*y=temp;
}

template<class T>
void bubbleSort(T *a, int n){
	bool isExchange=true;
	while(isExchange){
		isExchange=false;
		for (int j=0;j<n-1;j++){
			if(*(a+j)>*(a+j+1) ){
				myswap((a+j),(a+j+1));
				isExchange = true;
			}
		}
		cout << "ÔªËØµ÷Õû:"; 
		for(int s=0;s<n;s++){
			cout << *(a+s) << " ";
		}
		cout << endl;
	}
}

int main(){
	int data1[] = {'b','a','f','g','t','y','k','o','p','s'};
	bubbleSort(data1,10);
	return 0;
}
