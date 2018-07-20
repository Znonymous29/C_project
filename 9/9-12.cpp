#include<iostream>
using namespace std;

template<class T>
void myswap(T &x, T &y) {
	T temp = x;
	x = y;
	y=temp;
}

template<class T>
void selectionSort(T a[], int n) {
	for(int i=0;i<n-1;i++) {
		int leastIndex = i;
		for (int j=i+1;j<n;j++){
			if(a[j]<a[leastIndex]){
				leastIndex = j;
			}
		}
		myswap(a[i],a[leastIndex]); 
		cout << "第" << i+1 << "个元素调整:"; 
		for(int s=0;s<n;s++) {
			cout << a[s] << " ";
		}
		cout << endl;
	}
}

int main(){
	int data1[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	selectionSort(data1,20);
	return 0;
}
