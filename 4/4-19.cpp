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
	cout << "CPU的时钟频率为:";
	cout << rate << "Hz" << endl;
	cout << "字长为：";
	cout << wordsize << "位" << endl;
	cout << "核数为：";	
	cout << core << "个" << endl;
	if (thread)
		cout << "是超线程" << endl;
	else
		cout << "不是超线程" << endl; 
};

int main(){
	CPU cpu1(65100,32,4,true);
	cpu1.show();
	CPU cpu2(32000,64,2,false);	
	cpu2.show();
}
