#include <iostream>

using namespace std;

//klasa bazowa(rodzic)
class Animal{
	public:
	string name, breed, voice;
	float weight, height;
	
	void funcPublicAnimal(){
		cout<<"Funkcja publiczna klasy Animal"<<endl;
	};
	
	void funcAnimal(){
		cout<<"Funkcja Animal"<<endl;
	}
	
	void setVaccination(bool pVaccination){
		vaccination=pVaccination;
	}
	
	bool getVaccination(){
		return vaccination;
	}
	
	private:
		bool vaccination;
};

class Dog: public Animal{
	public:
		void aport(){
			cout<<"Aportowanie"<<endl;
		};
		
		void funcAnimal(){
		cout<<"Funkcja Animal w klasie Dog"<<endl;
	}
		
};

int main(int argc, char** argv) {
	Animal zwierze;
	zwierze.funcPublicAnimal();
	zwierze.setVaccination(1);
	cout<<zwierze.getVaccination()<<endl;
	zwierze.funcAnimal();
	
	Dog burek;
	burek.funcPublicAnimal();
	burek.aport();
	burek.funcAnimal();
	burek.voice="HauHau!";
	cout<<burek.voice<<endl;
}
