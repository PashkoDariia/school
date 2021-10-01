#include <iostream>
using namespace std;

class School{
	public:
	static string s_school;
	static string s_jobPosition;
	
	string name;
	string surname;
	
	void getData(); 
	void setNameSurname(string name, string surname, string s_school);
	
	static string s_getSchool();
	static void s_setSchool(string pSchool){
		s_school=pSchool;
	}
};

string School::s_school="ZSK";
string School::s_jobPosition="student";

void School::getData(){
	cout<<"\nImiê i nazwisko: "<<name<<" "<<surname<<"\nSzko³a: "<<s_school;
}

void School::setNameSurname(string pName, string pSurname, string s_school){
	name=pName;
	surname=pSurname;
	School::s_school=s_school;
};

string School::s_getSchool(){
	return s_school;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	
	School student;
	student.setNameSurname("Jan" , "Kowalski" , "CDV");
	student.getData();
	
	School::s_school="ZS£";
	student.getData();
	student.s_school="ZSK";
	student.getData();
	//cout<<School::s_school;
	
	School::s_setSchool("CDV");
	student.getData();
	return 0;
}
