#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd,mm,rrrr;
};

class Worker{
	public:
		unsigned int id{};
		string name{}, surname{};
		Date dateBirthday{};
		
		void showAllData();
		void setData(unsigned int x, string name, string surname, unsigned short int setDay, unsigned short int setMonth, unsigned short int setYear);
};

void Worker::showAllData(){
	cout<<"Dane pracownika: \nIdentyfikator: "<<id
	    <<"\nImiê i nazwisko:"<<name <<" "<< surname
		<<"\nData urodzenia: "<<dateBirthday.dd<<"-"<<dateBirthday.mm<<"-"<<dateBirthday.rrrr<<"r,\n";
};
void Worker::setData(unsigned int x, string name, string setSurname, unsigned short int setDay, unsigned short int setMonth, unsigned short int setYear ){
	Worker::id=id;
	Worker::name=name;
    surname=setSurname;
    dateBirthday.dd=setDay;
    dateBirthday.mm=setMonth;
    dateBirthday.rrrr=setYear;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	kowalski.setData(10,"Adam", "Nowak",1 ,2 ,3);
	kowalski.showAllData();
	return 0;
}
