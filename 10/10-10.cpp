#include <iostream>
#include <iterator>
#include <set>
#include <list> 
#include <algorithm>

using namespace std; 

int main(){
	set<int>s1;
	set<int>s2;
	for(int i=0;i<5;i++){
		int v;
		cin>>v;
		s1.insert(v);
	};
	for(int i=0;i<5;i++){
		int v;
		cin>>v;
		s2.insert(v);
	};	
} 
