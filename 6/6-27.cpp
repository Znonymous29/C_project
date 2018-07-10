#include<iostream>
#include<string>
using namespace std;

class Employee{
	public:
		Employee(string name,string addr,string city,unsigned int zip);
		void display() const;
		void setName(string newName); 
	private:
		string name,addr,city;
		unsigned int zip; 
};

Employee::Employee(string name,string addr,string city,unsigned int zip):name(name),addr(addr),city(city),zip(zip){
	cout << "员工" << name << "已经被录入" << endl; 
}

void Employee::display() const{
	cout << "该员工的姓名为：" << name << endl;
	cout << "该员工的地址为：" << addr << endl;
	cout << "该员工的城市为：" << city << endl;
	cout << "该员工的邮编为：" << zip << endl;
}

void Employee::setName(string newName){
	name = newName;
	cout << "员工已经被改为" << name << endl; 
}

int main(){
	Employee xiaoming("小明","香港重庆大厦","Hong Kong",250000);
	xiaoming.display();
	xiaoming.setName("王小明");
	xiaoming.display();
	return 0;
}
