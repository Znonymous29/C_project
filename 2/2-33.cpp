#include <iostream>
using namespace std;
enum weekday {SUNDAY, MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
}; 
int main(){
	int i;
	weekday d = WEDNESDAY;
	cout << "d = " << d << endl;
	i = d;
	cout << "i = " << i << endl;
	d = (weekday)6;
	cout << "d = " << d << endl;
	d = weekday( 4 );
	cout << "d = " << d << endl;
	return 0;
}
