#include <iostream>
using namespace std;

class tree{
	private:
		int ages;
	public:
		tree(int iage=0){
			ages = iage;
		};
		void grow(int years){
			ages += years;
		}
		int age(){
			return ages;
		}
};

int main(){
	tree t1(2);
	cout << "现在树龄为" << t1.age() << endl;
	t1.grow(5);
	cout << "现在树龄为" << t1.age() << endl;
}
