#include <iostream> 
using namespace std;

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout << "����������";
		cin >> arr[i];
	}
	for(int i=0;i<5;i++){
		cout << i << ":" << arr[i]  << endl;
	}
	return 0;
}
