#include <iostream>
using namespace std;
int main(){
	char flag;
	while(1){
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one:";
		cin >> flag;
		switch(flag){
			case 'A':
				cout << "�����Ѿ�����"<<endl;
				break;
			case 'D':
				cout << "�����Ѿ�ɾ��"<<endl;
				break;
			case 'S':
				cout << "�����Ѿ�����"<<endl;
				break;
			case 'Q':
				exit(0);
				break;
			default:
				;
		}
	}
} 
