#include<iostream> 
using namespace std;

class Object{
	public:
		Object(){}; 
		Object(float w):weight(w){
			cout<<"生成Object类"<<endl;
		}
		void showWeight(){
			cout<<"Object的重量为："<<weight<<endl;
		}
		~Object(){
			cout<<"毁掉Object类"<<endl;
		};
		float weight;
};

class Box:public Object{
	public:
		Box(float w):Object(w){
			cout<<"生成Box类"<<endl;
		};
		void setSize(float h,float w){
			height = h;
			width = w; 
		};
		void showSize(){
			cout<<"Box的长为："<<width<<"高为："<<height<<endl;
		};
		~Box(){
			cout<<"毁掉Box类"<<endl;
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
