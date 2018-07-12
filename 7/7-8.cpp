#include<iostream> 
#include<string>
using namespace std;

class Document{
	public:
		Document(){};
		Document(string n):name(n){};
		string name;
		void printName(){
			cout<<name<<endl;
		}; 		
};

class Book:public Document{
	public:
		Book(string n,long p):Document(n){
			pageCount = p;
		};
		void printName(){
			cout<<"�鼮����:";
			Document::printName();
		}
	private:
		long pageCount;
};

int main(){
	Document d("�ĵ�1");
	Book b("�鼮1",80);
	d.printName();
	b.printName();
	return 0;
}
