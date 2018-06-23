#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int num = rand() % 100 + 1;
	int pred;
	do{
		cout << "请输入猜测数值（0~100）：" << endl;
		cin >> pred;
		if(pred > num) {
			cout << "数值偏大" << endl;
			continue; 
		}
		else if(pred < num){
			cout << "数值偏小" << endl; 
			continue;
		}
		else{
			cout << "就是这个数值" << pred << endl; 
			break;
		}
	}while(pred != num);
	return 0;
}
