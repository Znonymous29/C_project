#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std; 


int main(){
	multiset<string> m1;
	map<string,int> m2;
	int n=0;
	while(true){
		string name;
		cout<<"ÊäÈëµ¥´Ê£º"<<endl;
		cin>>name;
		if(name=="q"){
			break;
		}
		m1.insert(name);
		m2[name]++;
		
		multiset<string>::iterator iter1;
		map<string, int>::iterator iter2;
		iter1 = m1.begin();
		iter2 = m2.begin();
		int tmp=0;
		
		while(iter1!=m1.end()){ 
			if(*iter1==name){
				++tmp;
			}
			++iter1;
		} 
		cout << "multiset:" << name << " : " << tmp << endl;
		
		while(iter2!=m2.end()){
			if(iter2->first==name){
				cout << "map:" <<iter2->first << " : " << iter2->second << endl;
			}
			iter2++;
		}
	}
	return 0;
}
