#include<iostream>
using namespace std;

template<class T>
void insertSort(T a[],int n) {
	for(int i=1;i<n;i++){
		int j=i;
		T temp=a[i];
		while(j>0 && temp<a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j] = temp;
		cout << "第" << i << "个元素调整:"; 
		for(int s=0;s<n;s++) {
			cout << a[s] << " ";
		}
		cout << endl;
	}
} 

int main(){
	int data1[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	insertSort(data1,20);
	return 0;
}
