#include <iostream>
using namespace std;
int main(){
	char flag; 
	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one:";
	cin >> flag;
	while(1){
	if (flag=='A'){
		cout << "�����Ѿ�����";
		continue;
	}
	else if(flag=='D'){
		cout << "�����Ѿ�ɾ��";
		continue;
	}
	else if(flag=='S'){
		cout << "�����Ѿ�����"; 
		continue;
	}
	else if(flag=='Q'){
		break;
	}
	}
	return 0;
}
