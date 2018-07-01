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
			cout << year << "年" << month << "月" << day << "日"; 
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
			cout << "录入" << endl;
			cout << "编号:";
			cin >> number;
			cout << "性别";
			cin >>  gender;;
			cout << "生日";
			birth.set();
			cout << "身份证号码";
			cin >> ID;
			ID[18] = '\0'; 
			cout << endl;			 
		}
		void output() {
			cout<<"编号："<<number<<endl; 
			cout<<"性别："<<gender<<endl; 
			cout<<"生日："; 
			birth.show(); 
			cout<<endl; 
			cout<<"身份证号："<<ID<<endl; 
		} 
		~Person(){
			cout<<" "<<number<<"号人员已经录入"<<endl; 
		} 
}; 

int main(){
	Person p1(123,1992,10,29,"320611199210293436");
//	p1.input();
	p1.output();
	return 0;
}
