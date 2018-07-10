#include <iostream>
using namespace std;


int main(){
	int N;
	cout << "输入学生人数" << endl;
	cin >> N;
	float grade[N],sum,avg;
	for (int i=0;i<N;i++){
		cout << "输入第" << (i+1) << "个学生成绩：";
		cin >> grade[i]; 
	}
	for (int i=0;i<N;i++){
		sum+=grade[i];
	}
	avg = sum/N;
	cout << "学生总和为：" << sum << endl;
	cout << "平均成绩为：" << avg << endl;
}
