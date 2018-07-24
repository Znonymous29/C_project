#include <iostream>
#include <stack>
#include <queue>

using namespace std; 


int main(){
	stack<int>a;
	queue<int>b;
	priority_queue<int>c;
	
	int arr[]={5,1,4,6,2,3};
	for(int i=0;i<4;i++){
		a.push(arr[i]);
		b.push(arr[i]);
		c.push(arr[i]);
	}
	for(int i=0;i<2;i++){
		cout<<"stack a，pop:"<< a.top() <<endl;
		a.pop();
		cout<<"queue b，pop:"<< b.front() <<endl;
		b.pop();
		cout<<"priority_queue c，pop:"<< c.top() <<endl;
		c.pop();
		cout<<"--------第"<< i+1 <<"次-------"<<endl;
	}
	for(int i=4;i<6;i++){
		a.push(arr[i]);
		b.push(arr[i]);
		c.push(arr[i]);
	}
	for(int i=0;i<2;i++){
		cout<<"stack a，pop:"<< a.top() <<endl;
		a.pop();
		cout<<"queue b，pop:"<< b.front() <<endl;
		b.pop();
		cout<<"priority_queue c，pop:"<< c.top() <<endl;
		c.pop();
		cout<<"--------第"<< i+1 <<"次-------"<<endl;
	}
	return 0;
}
