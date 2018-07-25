#include <iostream>
#include <iterator>
#include <set>
#include <algorithm>

using namespace std; 

int main(){
	int arr[]={1,1,4,4,5};
	set<int>s(arr,arr+5);
	copy(s.begin(),s.end(),ostream_iterator<int>(cout,"\n"));
}
