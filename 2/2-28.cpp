#include <iostream>
using namespace std;
int main(){
	char flag; 
	while(1){
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit)， Select one:";
		cin >> flag;
	if (flag=='A'){
		cout << "数据已经增加" << endl;
		continue;
	}
	else if(flag=='D'){
		cout << "数据已经删除" << endl;
		continue;
	}
	else if(flag=='S'){
		cout << "数据已经排序" << endl; 
		continue;
	}
	else if(flag=='Q'){
		break;
	}
	}
	return 0;
}
