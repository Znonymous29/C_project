#include <iostream>
using namespace std;

enum Type {character,integer,floating_point};

class DataType{
	Type vartype;
	union {
		char c;
		int i;
		float f;
	};
	
	public:
		DataType(char ch){
			vartype = character;
			c = ch;
		};
		DataType(int ii){
			vartype = integer;
			i = ii;
		};
		DataType(float ff){
			vartype = floating_point;
			f = ff;
		};
		void print();		
};

void DataType::print(){
	switch(vartype){
		case character:
			cout << "字符型" << c << endl;
			break;
		case integer:
			cout << "整型" << i << endl;
			break;
		case floating_point:
			cout << "浮点型" << f << endl;
			break;
	}
}

int main(){
	DataType data1(12.4F);
	data1.print();
	DataType data2('b');
	data2.print();
	DataType data3(23);
	data3.print();	
}
