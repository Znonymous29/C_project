#include <iostream> 
using namespace std;

void splitFloat(float x, int &i, float &f) {
	i = static_cast<int>(x);
	f = x - i;
}

int main(){
	cout << "����3����������:" << endl;
	for (int n=0;n<3;n++) {
		float x,f;
		int i;
		cin >> x;
		splitFloat(x, i, f);
		cout << "�������֣�" << i << "С�����֣�" << f << endl; 
	} 
}
