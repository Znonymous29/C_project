#include <iostream>
using namespace std;
int main(){
	char flag; 
	while(1){
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one:";
		cin >> flag;
	if (flag=='A'){
		cout << "�����Ѿ�����" << endl;
		continue;
	}
	else if(flag=='D'){
		cout << "�����Ѿ�ɾ��" << endl;
		continue;
	}
	else if(flag=='S'){
		cout << "�����Ѿ�����" << endl; 
		continue;
	}
	else if(flag=='Q'){
		break;
	}
	}
	return 0;
}
