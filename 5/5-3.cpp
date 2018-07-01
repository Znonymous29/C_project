#include<iostream>
using namespace std;

void myFunction(); 
int x = 5,y = 7;

int main() {
	cout << "x from main: " << x << "\n";
	cout << "y from main: " << y << "\n\n";
	myFunction();
	cout << "Back from myFunction!\n\n";
	cout << "x from main: " << x << "\n";
	cout << "y from main: " << y << "\n";
	return 0;
}

void myFunction(){
	int y = 10;
	cout << "x from myFunction: " << x << "\n";
	cout << "y from myFunction: " << y << "\n\n";
}

