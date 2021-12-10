#include <iostream>

using namespace std;

class Vehicle{
	public:
	string brand, model;
	float fuelAmount, capacity;
	unsigned short int numberOfSeats;
	void applyBrakes();
};

class Bus:public Vehicle{
	unsigned short int numberOfStandingPlaces;
};

class Car:public Vehicle{
	
};

class Truck:public Vehicle{
	string semitraller;
	unsigned short int numberOfPallets;
};
int main(int argc, char** argv) {
	
	return 0;
}
