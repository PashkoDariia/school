#include <iostream>
using namespace std;

class Car{
public:
   unsigned int id;
   string brand;
   string model;
   
   void getData();
   
   Car();
   
   Car(unsigned int pId, string pBrand, string pModel);
};


void Car::getData(){
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<", model: "<<model<<endl;
}

Car::Car(){
	id=0;
	brand="Marka domyœlna";
	model="Konstruktor domyœlny\n";
	cout<<"Konstruktor domyslny:";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
	cout<<"Konstruktor parametryczny:";
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "english");
	Car car1 = Car{1, "Ferrari", "F460"};
	car1.getData();
	
	Car car2 = Car(10, "BMW", "X6");
	car2.getData();
	return 0;
}
