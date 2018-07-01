#include<iostream>
using namespace std;

class Cat{
	public:
		Cat(int a):age(a){
			numOfCats++;
		}
		~Cat(){
			numOfCats--;
		}
		int getAge(){
			return age;
		}
		void setAge(int a){
			age = a;
		}
		static void getNumOfCats(){
			cout << "现在有" << numOfCats << "个猫" <<endl;
		}; 
	private:
		int age;
		static int numOfCats;
};

int Cat::numOfCats=0;

int main() {
	Cat baimao(5);
	Cat::getNumOfCats();
	Cat heimao(4);
	Cat::getNumOfCats();
}
