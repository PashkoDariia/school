#include <iostream>

using namespace std;

class Rectangle{
	public: 
	float height;
	float width;
	
	void showAllData();
};
	void Rectangle::showAllData(){
		
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Rectangle rectangle;
	cout<< "Podaj wysoko��: ";
	cin>> rectangle.height;
	cout<< "Podaj szeroko��: ";
	return 0;
}
