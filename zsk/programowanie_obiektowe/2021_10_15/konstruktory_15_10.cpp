#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};
class Worker{
	public:
	unsigned short int id;
	string name, surname;
	Date dateBirthday;
	
	void getData();
};

void Worker::getData(){
	cout<< "Id: "<<id<<"\nImiê i nazwisko: "<<name<<" "<<surname
	    <<"\nData urodzenia: "<<dateBirthday.dd<<"-"<<dateBirthday.mm<<"-"<<dateBirthday.yyyy<<endl;
}
int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "polish");
	Worker nowak;
	nowak.getData();
	
	return 0;
}
