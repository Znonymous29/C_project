#include<iostream>
using namespace std;

extern int n;
void fn1(){
	n = 233;
	cout << "fn1() n:" << n << endl; 
}
