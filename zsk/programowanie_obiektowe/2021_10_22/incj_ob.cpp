#include <iostream>

using namespace std;

class Car{
	public:
   unsigned int id=3;
   string brand="Fiat";
   string model="Multipla";
   
   void getData();
   
   Car();
   
   Car(unsigned int pId, string pBrand, string pModel);
};


void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<", model: "<<model<<endl;
}

Car::Car(){
	id=7;
	brand="Audi";
	model="A6";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
} 

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car bmw;
	bmw.getData();
	
	Car opel=Car(11, "opel", "y");
	opel.getData();
	return 0;
}
