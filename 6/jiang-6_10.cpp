#include <iostream> 
using namespace std;

void splitFloat(float x, int &i, float &f) {
	i = static_cast<int>(x);
	f = x - i;
}

int main(){
	cout << "输入3个浮点数字:" << endl;
	for (int n=0;n<3;n++) {
		float x,f;
		int i;
		cin >> x;
		splitFloat(x, i, f);
		cout << "整数部分：" << i << "小数部分：" << f << endl; 
	} 
}
