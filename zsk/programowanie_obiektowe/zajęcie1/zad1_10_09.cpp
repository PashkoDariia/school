#include <iostream>

using namespace std;

class Worker{
	public:
//deklaracja zmiennych czloncowskich (pol, wlasciwosci)
      string name;	
      string surname;
      int age; //dokoñczyc, sprawdziæ typ danych
//definicja funkcji czlonkowszkiej (metody)
      void showSurname(){
      	cout<<"\nNazwisko pracownika: " <<surname;
	  };
//deklaracja (prototyp) metody
      void showAllData();
};
//definicja metody showAllData
      void Worker::showAllData(){
      	cout << "\nImiê i nazwisko: "<< name << " " << surname;
	  };
	  
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Worker pracownik1;
	pracownik1.name="Krystian";
	pracownik1.surname="Nowak";
	cout << pracownik1.name;
	pracownik1.showSurname();
	pracownik1.showAllData();
	return 0;
}
