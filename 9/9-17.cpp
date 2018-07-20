#include<iostream>
using namespace std;

template<class T>
int seqSearch(const T list[], int n, const T &key) {
	for(int i=0;i<n;i++) {
		if(list[i]==key){
			return i;
		}
	}
	return -1;
} 

int main(){
	int data1[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	int input,key;
	cout << "data1 = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20}" <<endl;
	cout << "请输入数字："<< endl;
	cin >> input;
	key = seqSearch(data1,20,input);
	if(key>=0){
		cout << "该数字的位置为：第"<< key+1 <<"位"<<endl;
	}else{
		cout << "该数字未找到"<<endl;
	}
	return 0; 
}
