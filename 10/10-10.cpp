#include <iostream>
#include <iterator>
#include <set>
#include <list> 
#include <algorithm>

using namespace std; 

int main(){
	set<int>s1;
	set<int>s2;
	set<int>s_i;
	set<int>s_u;
	set<int>s_d;
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
	
	cout<<"s1 set:";
	copy(s1.begin(),s1.end(),ostream_iterator<int>(cout," "));
	cout<<endl;	
	cout<<"s2 set:";
	copy(s2.begin(),s2.end(),ostream_iterator<int>(cout," "));
	cout<<endl;	
		
	set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s_i,s_i.begin()));
	cout<<"A n B set:";
	copy(s_i.begin(),s_i.end(),ostream_iterator<int>(cout," "));
	cout<<endl;	
	
	set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s_u,s_u.begin()));
	cout<<"A u B set:";
	copy(s_u.begin(),s_u.end(),ostream_iterator<int>(cout," "));
	cout<<endl;	
	
	set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s_d,s_d.begin()));
	cout<<"A - B set:";
	copy(s_d.begin(),s_d.end(),ostream_iterator<int>(cout," "));
	cout<<endl;		
			
	return 0;
} 
