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
	cout << "���������" << endl;
	getline(cin,s1);
	cout << "������ĸ������" << countWords(s1) << endl;
	return 0; 
}
