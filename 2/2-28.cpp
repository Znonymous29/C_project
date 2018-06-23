#include <iostream>
using namespace std;
int main(){
	char flag; 
	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)， Select one:";
	cin >> flag;
	while(1){
	if (flag=='A'){
		cout << "数据已经增加";
		continue;
	}
	else if(flag=='D'){
		cout << "数据已经删除";
		continue;
	}
	else if(flag=='S'){
		cout << "数据已经排序"; 
		continue;
	}
	else if(flag=='Q'){
		break;
	}
	}
	return 0;
}
