#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
	int arr[]={1,1,4,4,5};
	vector<int>s(arr,arr+5);
	vector<int>::iterator new_end;
	new_end=unique(s.begin(),s.end());
	s.erase(new_end, s.end());
	copy(s.begin(),s.end(),ostream_iterator<int>(cout,"\n"));
}
