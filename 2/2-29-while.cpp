#include <iostream>
using namespace std;
int main(){
	int n,i;
	while(n<=100){
		int count = 0;
		int i = 1;
		while(i<=n){
			if (n % i == 0){
				count++;
			}
			i++;
		}
		if(count==2){
			cout << n << endl;
		}
		n++;
	}
}
