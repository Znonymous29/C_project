#include <iostream>
using namespace std;


int main(){
	int N;
	cout << "����ѧ������" << endl;
	cin >> N;
	float grade[N],sum,avg;
	for (int i=0;i<N;i++){
		cout << "�����" << (i+1) << "��ѧ���ɼ���";
		cin >> grade[i]; 
	}
	for (int i=0;i<N;i++){
		sum+=grade[i];
	}
	avg = sum/N;
	cout << "ѧ���ܺ�Ϊ��" << sum << endl;
	cout << "ƽ���ɼ�Ϊ��" << avg << endl;
}
