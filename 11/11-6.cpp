#include <fstream>
#include <iostream>
using namespace std; 

class Dog{
	public:
		Dog(int w,int a):weight(w),age(a){};
		~Dog(){};
		
		int getWeight() const {
			return weight;
		}
		int getAge() const {
			return age;
		}
	private:
		int weight,age;
};

int main(){
	ofstream file1out("dog1.text");
	ofstream file2out("dog2.text",ios_base::binary);

	Dog dog1(5,10);
	file1out.write((char *) &dog1, sizeof dog1);
	file1out.close();
	file2out.write((char *) &dog1, sizeof dog1);
	file2out.close();	
	
	Dog dog2(1,1);
	cout << "dog2 weight: " << dog2.getWeight() << endl;
	cout << "dog2 age: " << dog2.getAge() << endl;
	
	ifstream file1in("dog1.text");
	ifstream file2in("dog2.text",ios_base::binary);
	
	file1in.read((char *) &dog2,sizeof dog2);
	file2in.read((char *) &dog2,sizeof dog2);
	cout << "dog2 weight: " << dog2.getWeight() << endl;
	cout << "dog2 age: " << dog2.getAge() << endl;
	
	file1in.close();
	file2in.close();
	
	return 0;		
}
