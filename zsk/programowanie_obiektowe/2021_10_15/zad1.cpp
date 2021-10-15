#include <iostream>

using namespace std;

class Dog{
	public:
		string name;
		string color;
		string eye_color;
		unsigned short int height;
		unsigned short int length;
		unsigned short int weight;
		
		void sit();
		void layDown();
		void shake();
		void come();
		void setData(string sName, string sColor, string sEye_color, unsigned short int sHeight, unsigned short int sLength, unsigned short int sWeight);
		void getData();
};

void Dog::setData(string sName, string sColor, string sEye_color, unsigned short int sHeight, unsigned short int sLength, unsigned short int sWeight){
	name=sName;
	color=sColor;
	eye_color=sEye_color;
	height=sHeight;
	length=sLength;
	weight=sWeight;
};

void Dog::getData(){
	cout<< "Imiê: "<<name
	    << "\nKolor: "<<color
	    << "\nKolor oczu: "<<eye_color
	    << "\nWysokoœæ: "<<height
	    << "\nD³ugoœæ: "<<length
	    << "\nWaga: "<<weight;
}

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "polish");
	Dog pies;
	pies.setData("Miœ", "czarny", "szary", 23, 45, 14);
	pies.getData();
	return 0;
}
