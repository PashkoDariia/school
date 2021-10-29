#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void setSides(double pSideA, double pSideB);
		void getSides();
		void area();
		double circuit();
		
};

Rectangle::Rectangle(){
	cout<< "Konstruktor domyœlny "<<endl;
}

Rectangle::Rectangle(double pSideA, double pSideB){
	
}

Rectangle::Rectangle(double&, double&)

void Rectangle::catchSides(double&, double&)

void Rectangle::setSides(double pSideA, double pSideB)

void Rectangle::getSides();
void Rectangle::area();
void Rectangle::circuit();

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	return 0;
}
