#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int num = rand() % 100 + 1;
	int pred;
	do{
		cout << "������²���ֵ��0~100����" << endl;
		cin >> pred;
		if(pred > num) {
			cout << "��ֵƫ��" << endl;
			continue; 
		}
		else if(pred < num){
			cout << "��ֵƫС" << endl; 
			continue;
		}
		else{
			cout << "���������ֵ" << pred << endl; 
			break;
		}
	}while(pred != num);
	return 0;
}
