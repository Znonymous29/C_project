#include <fstream>
#include <iostream>
using namespace std; 

int main(){
	char ch;
	ifstream file("text1.txt"); 
	while(file.get(ch)){
		cout << ch;
	}
	file.close();

	return 0;
}
