#include<iostream>
using namespace std;

template<class T>
void myswap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void selectionSort(T a[], int n){
	for(int i = 0;i<n-1;i++){
		int leastIndex = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[leastIndex]){
				leastIndex = j;
			}
		}
		myswap(a[i],a[leastIndex]);
	}
}

template<class T>
int binSearch(const T list[], int n, T &key){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(key==list[mid]){
			return mid;
		}else if(key<list[mid]){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return -1;
}


int main(){
	int data1[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	selectionSort(data1,20);
	int input,key;
	cout << "请输入想要查询的数字：";
	cin>>input;
	key = binSearch(data1,20,input);
	if(key>=0){
		cout << "该数字的位置为：第"<< key+1 <<"位"<<endl;
	}else{
		cout << "该数字未找到"<<endl;
	}
	return 0; 
}
