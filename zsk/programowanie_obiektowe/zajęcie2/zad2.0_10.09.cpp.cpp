#include <iostream>

using namespace std;

class Rectangle{
	public: 
	float height, width;
    float showArea();
    float showCircuit();
    
	
	void showAllData();
};
    float Rectangle::showArea(){
    	return width * height;
	}
	float Rectangle::showCircuit(){
		return (2*width) + (2*height);
	}
	void Rectangle::showAllData(){
		cout << "\nPole wynosi: "<<showArea()
		     << "\nObw�d wynosi: "<<showCircuit();
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Rectangle rectangle;
	cout<< "Podaj wysoko��: ";
	cin>> rectangle.height;
	cout<< "Podaj szeroko��: ";
	cin>> rectangle.width;
    rectangle.showAllData();
	return 0;
}
