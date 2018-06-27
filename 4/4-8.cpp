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
	cout << "小黑";
	cout << xiaohei.getAge() << "岁，";
	cout << xiaohei.getWeight() << "千克重。" << endl;
	xiaohei.setAge(6);
	xiaohei.setWeight(9);
	cout << "小黑现在";
	cout << xiaohei.getAge() << "岁，";
	cout << xiaohei.getWeight() << "千克重。" << endl;
	return 0; 
}
