#include <iostream>
#include <iterator>
#include <string>
#include <vector> 
#include <list> 
#include <algorithm>

using namespace std; 

int main(){
	string name[]={"alice","beckham","calvin","david","eason","frank","gavin"};
	vector<string> s(name,name+7);
	
	vector<string>::iterator iter;
	ostream_iterator<string> prints(cout," ");
	cout<<"string list:"<<endl;
	copy(s.begin(),s.end(),prints);
	cout<<endl;
	
	swap(s[0],s[1]);
	cout<<"swap change:"<<endl;
	copy(s.begin(),s.end(),prints);
	cout<<endl;
	
	iter_swap(s.begin()+2,s.begin()+3);
	cout<<"iter_swap change:"<<endl;
	copy(s.begin(),s.end(),prints);
	cout<<endl;
	
	string name2[]={"helen","ianna","jack","kevin"};
	vector<string> s2(name2,name2+4);
	cout<<"string list2:"<<endl;
	copy(s2.begin(),s2.end(),prints);
	cout<<endl;
		
	swap_ranges(s.begin()+4,s.end()-1,s2.begin());
	cout<<"iter_swap change:"<<endl;
	copy(s.begin(),s.end(),prints);
	cout<<endl;			
} 
