#include<iostream>
using namespace std;

int main(){
	ios_base::fmtflags original_flags=cout.flags(); //1  保存现在的格式化参数设置
	cout<<812<<'|';
	cout.setf(ios_base::left,ios_base::adjustfield); //2 把对齐方式由缺省的右对齐改为左对齐
	cout.width(10);  //3 把输出域的宽度由缺省值0改为10
	cout<<813<<815<<'\n';
	cout.unsetf(ios_base::adjustfield);  //4 清除对齐方式的设置  
	cout.precision(2);
	cout.setf(ios_base::uppercase|ios_base::scientific); //5 更改浮点数的显示为科学格式 
	cout<<831.0;
	cout.flags(original_flags); //6 恢复原来的格式化参数设置
	return 0;
}
