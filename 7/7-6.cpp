#include<iostream> 
using namespace std;

//class Mammal{
//	public:
//		Mammal(){
//			cout<<"Mammal is created." << endl;	
//		};
//		~Mammal(){
//			cout<<"Mammal is killed." << endl;	
//		};
//}; 
//
//class Dog:public Mammal{
//	public:
//		Dog(){
//			cout<<"Dog is created." << endl;	
//		};
//		~Dog(){
//			cout<<"Dog is killed." << endl;
//		}
//};
//
//int main(){
//	Dog xiaohei;
//	return 0;
//}

enum myColor{Black,White};

class Mammal{
	public:
		Mammal();
		~Mammal();
		int GetAge() const { return itsAge; }
		void SetAge(int age) { itsAge = age; }
		int GetWeight() const { return itsWeight; }
		void SetWeight(int weight) { itsWeight = weight; }
		void Speak() const { cout << "Mammal sound!\n"; }
	protected:
		int itsAge;
		int itsWeight;
};

class Dog:public Mammal{
	public:
		Dog();
		~Dog();
		myColor GetColor() const { return itsColor; }
		void SetColor (myColor color) { itsColor = color; }
		void WagTail() { cout << "Tail wagging...\n"; }
	private:
		myColor itsColor;
};

Mammal::Mammal():itsAge(1),itsWeight(5){
	cout << "Mammal constructor...\n";
};
Mammal::~Mammal(){
	cout << "Mammal destructor...\n";
};

Dog::Dog():itsColor(Black){
	cout << "Dog constructor...\n";	
}
Dog::~Dog(){
	cout << "Dog destructor...\n";
}

int main(){
	Dog xiaohei;
	xiaohei.Speak();
	xiaohei.WagTail();
	cout << "xiaohei is " << xiaohei.GetAge() << " years old\n";
	return 0;
}
