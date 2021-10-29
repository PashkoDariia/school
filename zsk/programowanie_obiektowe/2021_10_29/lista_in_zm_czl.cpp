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
	cout<< "\nId: "<<id<<"\nMarka i model: "<<brand<< " "<< model<<endl;
}


Car::Car():
	id {0}, 
	brand{"MARKA"},
	model{"MODEL"}
	{
		cout<<"Konstruktor domyœlny: ";
	}


Car::Car (unsigned int pId, string pBrand, string pModel):
	id {pId},
	brand {pBrand},
	model{pModel}

{
	cout<< "Konstruktor parametryczny: ";
}



int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "polish");
	//niejawny
	Car fiat;
	fiat.getData();
	
	//jawny
	Car fiat1=Car();
	fiat.getData();
	
	Car fiat2(10, "Fiat", "Multiple");
	fiat2.getData();
	
	Car fiat3=Car(20, "Fiat", "Panda");
	fiat3.getData();
	
	
	return 0;
}
