#include<iostream> 
#include<string>
using namespace std;

void reverse(string &s){
	static int i=0;
	int len = s.length();
	char s2;
	if (i>=len/2){
		return;
	} 
	s2 = s[i];
	s[i] = s[len-i-1];
	s[len-i-1] = s2;
	i++;
	reverse(s); 
}

int main(){
	string s = "you know nothing";
	cout << "×Ö·û´®Îª£º" << s << endl;
	reverse(s);
	cout << "·­×ª×Ö·û´®Îª£º" << s << endl;
}
