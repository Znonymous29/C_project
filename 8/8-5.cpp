#include<iostream>
using namespace std;

class Mammal{
	public:
		Mammal(){
			cout << "Mammal is called..." << endl;
		};
		virtual ~Mammal(){
			cout << "Mammal is destroyed..." << endl;
		};
		virtual void speak(){
			cout << "Mammal is speaking ahhhhh..." << endl;
		};
};

class Dog:public Mammal{
	public:
		Dog(){
			cout << "Dog is called..." << endl;	
		};
		~Dog(){
			cout << "Dog is destroyed..." << endl;
		};
		void speak(){
			cout << "Dog is speaking wooooo..." << endl;
		};
};

int main(){
//	Dog xiaohei;
//	xiaohei.speak();
	Mammal *xiaobai = new Dog;
	xiaobai->speak();
	delete xiaobai;
	return 0;
}
