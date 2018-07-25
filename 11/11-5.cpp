#include <fstream>
#include <iostream>
using namespace std; 

int main(){
	ofstream file1("text1.txt", ios_base::app); 
	file1 << "已成功添加字符！";
	file1.close();
	char ch;
	ifstream file2("text1.txt"); 
	while(file2.get(ch)){
		cout << ch;
	}
	file2.close();

	return 0;
}
