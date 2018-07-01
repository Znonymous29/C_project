#include <iostream>
#include <cstring>
using namespace std;


class Date{
	private:
		int year,month,day;
	public:
		Date(){};
		Date(int initYear,int initMonth,int initDay){
			year = 	initYear;
			month = initMonth;
			day = initDay;
		};
		void set(){
			cin >> year >> month >> day;
		}
		void show(){
			cout << year << "��" << month << "��" << day << "��"; 
		}
		int getDate();
};


class Person{
	private:
		int number;
		char gender;
		Date birth;
		char ID[18];
	public:
		Person(){};
		Person(int n, int y ,int m, int d, char id[18], char g='male'): birth(y,m,d) {
			number = n;
			gender = g;
			strcpy(ID,id);
		}
		Person(Person & p) {
			number=p.number; 
			gender=p.gender; 
			birth=p.birth; 
			strcpy(ID,p.ID); 
		}
		void input() {
			cout << "¼��" << endl;
			cout << "���:";
			cin >> number;
			cout << "�Ա�";
			cin >>  gender;;
			cout << "����";
			birth.set();
			cout << "���֤����";
			cin >> ID;
			ID[18] = '\0'; 
			cout << endl;			 
		}
		void output() {
			cout<<"��ţ�"<<number<<endl; 
			cout<<"�Ա�"<<gender<<endl; 
			cout<<"���գ�"; 
			birth.show(); 
			cout<<endl; 
			cout<<"���֤�ţ�"<<ID<<endl; 
		} 
		~Person(){
			cout<<" "<<number<<"����Ա�Ѿ�¼��"<<endl; 
		} 
}; 

int main(){
	Person p1(123,1992,10,29,"320611199210293436");
//	p1.input();
	p1.output();
	return 0;
}
