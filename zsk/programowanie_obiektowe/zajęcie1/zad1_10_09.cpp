#include <iostream>

using namespace std;

class Worker{
	public:
//deklaracja zmiennych czloncowskich (pol, wlasciwosci)
      string name;	
      string surname;
      unsigned short int yearBirthday;
      string nationality;
      float height;
      char gender;
      //unsigned short int age; //doko�czyc, sprawdzi� typ danych
      
//definicja funkcji czlonkowszkiej (metody)
      void showName(){
	  	cout << "\nImi� pracownika: " <<name;
	  };
      void showSurname(){
      	cout<<"\nNazwisko pracownika: " <<surname;
	  };
	  void showYearBirthday(){
	  	cout<<"\nRok urodzenia: "<<yearBirthday;
	  }
	  void showNationality(){
	  	cout << "\nNarodowo��: " <<nationality;
	  };
	  void showHeight(){
	  	cout << "\nWzrost: "<<height;
	  };
	  void showGender(){
	  	cout << "P�e�: "<<gender;
	  }
	  
//deklaracja (prototyp) metody
      void showAllData();
};

//definicja metody showAllData
      void Worker::showAllData(){
      	cout << "\nImi� i nazwisko: "<< name << " " << surname;
      	cout << "\nNarodowo��: " << nationality;
      	cout << "\nWzrost: "<<height<< " cm";
      	cout<<"\nRok urodzenia: "<<yearBirthday;
      	cout << "\nP�e�: ";
      	 
      	
      	switch(gender){
      		case 'm':
      			cout<< "m�czyzna";
      			break;
      			case 'w':
      				cout<< "kobieta";
      				break;
      				default:
      					cout<<"-";
		  }
	  };
	  
	  
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Worker pracownik1;
	pracownik1.name="Krystian";
	pracownik1.surname="Nowak";
    pracownik1.nationality  ="Polish";
    pracownik1.height=181.5;
    pracownik1.gender='m';
    pracownik1.yearBirthday =2005;
	//cout << pracownik1.name;
	//pracownik1.showSurname();
	pracownik1.showAllData();
	return 0;
}

