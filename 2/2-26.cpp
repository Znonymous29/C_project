#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char i;
    while(1)
    {
    cout<<"is raining?"<<endl;
    cin>>i;
    if (toupper(i)=='Y'){
        cout<<"is raining."<<endl;
        break;
    }
    if (toupper(i)=='N'){
        cout<<"is not raining."<<endl;
        break;
    }
    }
    return 0;
}
