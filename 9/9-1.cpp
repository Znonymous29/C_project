#include <iostream>
#include "array.h"
using namespace std; 

int main(){
	int n;
	cout << "������ѧ��������" << endl;
	cin >> n;
	Array<float>a(n);
	float sum,avg;
	cout << "����������ѧ���ĳɼ���" << endl;
	for(int i=0;i<n;i++){
		cout<<"�������"<<(i+1)<<"��ѧ���ĳɼ���";
		cin>>a[i]; 
		sum+=a[i];
	}
	avg = sum/n;
	cout << "ȫ��ѧ����ƽ���ɼ�Ϊ��"<<avg<<endl;
}
