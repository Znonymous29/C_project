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
	cout << "Ա��" << name << "�Ѿ���¼��" << endl; 
}

void Employee::display() const{
	cout << "��Ա��������Ϊ��" << name << endl;
	cout << "��Ա���ĵ�ַΪ��" << addr << endl;
	cout << "��Ա���ĳ���Ϊ��" << city << endl;
	cout << "��Ա�����ʱ�Ϊ��" << zip << endl;
}

void Employee::setName(string newName){
	name = newName;
	cout << "Ա���Ѿ�����Ϊ" << name << endl; 
}

int main(){
	Employee xiaoming("С��","����������","Hong Kong",250000);
	xiaoming.display();
	xiaoming.setName("��С��");
	xiaoming.display();
	return 0;
}
