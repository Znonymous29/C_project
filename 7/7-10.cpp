#include<iostream> 
using namespace std;

class Object{
	public:
		Object(){}; 
		Object(float w):weight(w){
			cout<<"����Object��"<<endl;
		}
		void showWeight(){
			cout<<"Object������Ϊ��"<<weight<<endl;
		}
		~Object(){
			cout<<"�ٵ�Object��"<<endl;
		};
		float weight;
};

class Box:public Object{
	public:
		Box(float w):Object(w){
			cout<<"����Box��"<<endl;
		};
		void setSize(float h,float w){
			height = h;
			width = w; 
		};
		void showSize(){
			cout<<"Box�ĳ�Ϊ��"<<width<<"��Ϊ��"<<height<<endl;
		};
		~Box(){
			cout<<"�ٵ�Box��"<<endl;
		};
		float height,width;
};

int main(){
	Box b(5);
	b.setSize(2,3);
	b.showSize();
	b.showWeight();
	return 0;
} 
