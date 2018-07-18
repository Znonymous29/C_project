#include <iostream>
#include "array.h"
using namespace std; 

int main(){
	int n;
	cout << "请输入学生人数：" << endl;
	cin >> n;
	Array<float>a(n);
	float sum,avg;
	cout << "请依次输入学生的成绩：" << endl;
	for(int i=0;i<n;i++){
		cout<<"请输入第"<<(i+1)<<"个学生的成绩：";
		cin>>a[i]; 
		sum+=a[i];
	}
	avg = sum/n;
	cout << "全部学生的平均成绩为："<<avg<<endl;
}
