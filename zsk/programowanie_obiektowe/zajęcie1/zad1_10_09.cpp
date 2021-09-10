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
      //unsigned short int age; //dokoñczyc, sprawdziæ typ danych
      
//definicja funkcji czlonkowszkiej (metody)
      void showName(){
	  	cout << "\nImiê pracownika: " <<name;
	  };
      void showSurname(){
      	cout<<"\nNazwisko pracownika: " <<surname;
	  };
	  void showYearBirthday(){
	  	cout<<"\nRok urodzenia: "<<yearBirthday;
	  }
	  void showNationality(){
	  	cout << "\nNarodowoœæ: " <<nationality;
	  };
	  void showHeight(){
	  	cout << "\nWzrost: "<<height;
	  };
	  void showGender(){
	  	cout << "P³eæ: "<<gender;
	  }
	  
//deklaracja (prototyp) metody
      void showAllData();
};

//definicja metody showAllData
      void Worker::showAllData(){
      	cout << "\nImiê i nazwisko: "<< name << " " << surname;
      	cout << "\nNarodowoœæ: " << nationality;
      	cout << "\nWzrost: "<<height<< " cm";
      	cout<<"\nRok urodzenia: "<<yearBirthday;
      	cout << "\nP³eæ: ";
      	 
      	
      	switch(gender){
      		case 'm':
      			cout<< "mê¿czyzna";
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

