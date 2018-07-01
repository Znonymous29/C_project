#include<iostream>
using namespace std;

class Boat; 

class Car{
	private:
		int weight;
	public:
		Car(int w){
			weight = w;
		}
		friend int getTotalWeight(Car &car, Boat &boat);
};

class Boat{
	private:
		int weight;
	public:
		Boat(int w){
			weight = w;
		}
		friend int getTotalWeight(Car &car, Boat &boat);
};

int getTotalWeight(Car &car, Boat &boat){
	return car.weight + boat.weight;
}

int main(){
	Car car(5);
	Boat boat(10);
	cout << getTotalWeight(car,boat) << endl;
}

