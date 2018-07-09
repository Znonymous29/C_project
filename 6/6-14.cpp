#include <iostream>
using namespace std;

int main(){
	double *var;
	cout << "指针所占字节" << sizeof(var);
	cout << "指针地址所占字节" << sizeof(*var);
	return 0;
}
