#include <iostream>
using namespace std;
int main(){
	int score;
	cout<<"how many scores?";
	cin>>score;
	if(score>=90)
	{
		cout<<"ÓÅ";	
	}
	else if(score>=80)
	{
		cout<<"Á¼";	
	}
	else if(score>=60)
	{
		cout<<"ÖÐ";
	}
	else{
		cout<<"²î";	
	}
	return 0;
}
