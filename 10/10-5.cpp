#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <ctime>
using namespace std; 

template<typename T>
int Joseph(int n ,int m){
	if(n < 1 || m < 1) {
		return -1;
	}
	T s;
	for(int i=1;i<=n;i++){
		s.push_back(i);
	}
	int len = 0;
	while(s.size()!=1){
		len = (len+m-1)%s.size();
		s.erase(s.begin()+len);
	}
	return s[0];
}  

int  Joseph_list(int n, int m){
	if(n < 1 || m < 1) {
		return -1;
	}
	list<int>s;
	for(int i=1;i<=n;i++){
		s.push_back(i);
	}
	int len = 0;
	while(s.size()!=1){
		len = (len+m-1)%s.size();
		s.erase(s.begin()+len);
	}
	return s[0];
}

int main(){
	int n,m;
	cout << "Input n and m:";
	cin >> n >> m;
	
	clock_t v_start = clock();
	int t1 = Joseph<vector<int> >(n,m);
	clock_t v_end = clock();
	cout << "vector type--Result:" << t1 <<endl;
	cout << "vector type--Running Time:" << (double)(v_end - v_start)/ CLOCKS_PER_SEC <<endl;
	
	clock_t d_start = clock();
	int t2 = Joseph<deque<int> >(n,m);
	clock_t d_end = clock();
	cout << "deque type--Result:" << t2 <<endl;
	cout << "deque type--Running Time:" << (double)(d_end - d_start)/ CLOCKS_PER_SEC <<endl;
	
//  list´æÔÚÎÊÌâ	
	clock_t l_start = clock();
	int t3 = Joseph_list(n,m);
	clock_t l_end = clock();
	cout << "list type--Result:" << t3 <<endl;
	cout << "list type--Running Time:" << (double)(l_end - l_start)/ CLOCKS_PER_SEC <<endl;
		
	return 0;
}
