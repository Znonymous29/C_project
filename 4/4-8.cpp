#include <iostream>
using namespace std;

class Dog {
	private:
		int age, weight;
	
	public:
		Dog(int initAge = 0, int initWeight = 2){
			age = initAge;
			weight = initWeight;
		};
		int getAge() {
			return age;
		}
		int getWeight() {
			return weight;
		} 
		void setAge(int sAge){
			age = sAge;
		}
		void setWeight(int sWeight){
			weight = sWeight;
		}
}; 


int main(){
	Dog xiaohei(3,6);
	cout << "С��";
	cout << xiaohei.getAge() << "�꣬";
	cout << xiaohei.getWeight() << "ǧ���ء�" << endl;
	xiaohei.setAge(6);
	xiaohei.setWeight(9);
	cout << "С������";
	cout << xiaohei.getAge() << "�꣬";
	cout << xiaohei.getWeight() << "ǧ���ء�" << endl;
	return 0; 
}
