#include<iostream>
using namespace std;

int main(){
	ios_base::fmtflags original_flags=cout.flags(); //1  �������ڵĸ�ʽ����������
	cout<<812<<'|';
	cout.setf(ios_base::left,ios_base::adjustfield); //2 �Ѷ��뷽ʽ��ȱʡ���Ҷ����Ϊ�����
	cout.width(10);  //3 �������Ŀ����ȱʡֵ0��Ϊ10
	cout<<813<<815<<'\n';
	cout.unsetf(ios_base::adjustfield);  //4 ������뷽ʽ������  
	cout.precision(2);
	cout.setf(ios_base::uppercase|ios_base::scientific); //5 ���ĸ���������ʾΪ��ѧ��ʽ 
	cout<<831.0;
	cout.flags(original_flags); //6 �ָ�ԭ���ĸ�ʽ����������
	return 0;
}
