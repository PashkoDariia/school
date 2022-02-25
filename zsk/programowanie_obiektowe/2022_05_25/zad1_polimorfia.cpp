#include <iostream>

using namespace std;

class Character{
	private:
		
	public:
		 string name;
	 	 virtual void go()=0;
	 	 virtual void stop()=0;
	 	 virtual string showName()=0;
};

class Human:public Character{
	public:
		 void go(){
			cout<<"Cz�owiek idzie\n";
		}
		void stop(){
			cout<<"Cz�owiek zatrzymuje si�\n";
		};
		string showName(){
			return name;
		}
};

class Bear:public Character{
	public:
		void go(){
			cout<<"Nied�wied� idzie\n";
		}
		void stop(){
			cout<<"Nied�wied� zatrzymuje si�\n";
		};
		string showName(){
			return name;
		}
};

class SuperHero:public Character{
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	//Character postac;
	//postac.go();
	
	Human czlowiek;
	czlowiek.go();
	
	Character *wsk=&czlowiek;
	wsk->go();//postac idzie / po dodaniu virtual w klasie bazowej / czlowiek idzie
	
	Bear niedzwiedz;
	wsk=&niedzwiedz;
	wsk->go();
	
	wsk=&czlowiek;
	wsk->name="Janusz\n";
	cout<<wsk->showName();
	
	wsk=&niedzwiedz;
	wsk->name="Misza";
	cout<<wsk->showName();
	return 0;
}
