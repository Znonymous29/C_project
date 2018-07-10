#include <iostream>
#include <string>
using namespace std;

int countWords(string& s){
	int num;
	for(int i=0;i<s.size();i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			num++;
		}
	}
	return num;
}; 

int main(){
	string s1;
	cout << "请输入句子" << endl;
	getline(cin,s1);
	cout << "句子字母个数：" << countWords(s1) << endl;
	return 0; 
}
