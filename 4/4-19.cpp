#include <iostream>
using namespace std;

class CPU {
	private:
		unsigned rate : 28;
		int wordsize : 8;
		int core : 4;
		bool thread : 1;
		
	public:
		CPU(double r, int w, int c, bool t){
			rate = r;
			wordsize = w;
			core = c;
			thread = t;
		}
		void show();
};

void CPU::show(){
	cout << "CPU��ʱ��Ƶ��Ϊ:";
	cout << rate << "Hz" << endl;
	cout << "�ֳ�Ϊ��";
	cout << wordsize << "λ" << endl;
	cout << "����Ϊ��";	
	cout << core << "��" << endl;
	if (thread)
		cout << "�ǳ��߳�" << endl;
	else
		cout << "���ǳ��߳�" << endl; 
};

int main(){
	CPU cpu1(65100,32,4,true);
	cpu1.show();
	CPU cpu2(32000,64,2,false);	
	cpu2.show();
}
