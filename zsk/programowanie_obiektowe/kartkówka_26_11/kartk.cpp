#include <iostream>

using namespace std;

class Car{
	public:
		string brand;
		string model;
		string color;
		int year;
		float price;
		
		Car();
		Car(string, string, int);
		Car(string, string, string, int, float);
		
		void showBrandModel();
		
		~Car(){
			cout<<"Destruktor zosta³ wywo³any"<<endl;
		}
		
		void copyObject();
		void showData();
};

Car::Car(){
	cout<<"Konstruktor domyœlny zosta³ wywo³any"<<endl;
}

Car::Car(string pBrand, string pModel, string pColor, int pYear, float pPrice ){
	brand=pBrand;
	model=pModel;
	color=pColor;
	year=pYear;
	price=pPrice;
}

Car::Car(string pBrand, string pModel, int pYear){
	brand=pBrand;
	model=pModel;
	year=pYear;
}

void Car::showBrandModel(){
	cout<< "Marka: "<< brand
	    << "\nModel: "<< model<<endl;
}

void Car::showData(){
	cout<< "Marka: "<<brand
	    << "\nModel: "<<model
	    << "\nColor: "<<color
	    << "\nYear: "<<year
	    << "\nPrice: "<< price<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	{
		Car fiat = Car ("Fiat", "Multipla", "szary", 2000, 2000.99);
	    Car *wsk;
	    wsk = &fiat;
	    wsk->price=1900;
	    wsk->showData();
	    fiat.showBrandModel();
	}
	return 0;
}
