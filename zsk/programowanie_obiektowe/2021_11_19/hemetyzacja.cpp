#include <iostream>

using namespace std;

class Account{
	private:
        int	balance = 1000; 
        int debit = 500;
        int credit = 2000;
    
    public:
    	int getBalance();
    	int withdraw(int money);
    	int withdrawDebit(int money);
    	int deposite(int money);
    	
};

int Account::getBalance(){
        return balance;
}

int Account::withdraw(int money){
	if (money > 0){
		if (money<=balance){
		balance -= money;
		return money;
	}
	else{
		return 0;
	}
}
}

int Account::withdrawDebit(int money){
	if (money > 0){
		if (money<=(balance+debit)){
		balance -= money;
		return money;
	}
	else{
		return 0;
	}	
}
    else{
		return 0;
	} 
}

int Account::deposite(int money){
	if (money > 0){
		balance +=money;
		return money;
	}
	else{
		return 0;
	}
}

int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "polish");
	Account k1;
	//cout<< "Stan konta: "<<k1.balance<<endl;
	//k1.balance = +2000;
	//cout<< "Stan konta: "<<k1.balance<<endl;
	//cout<< "Wyp³acono z konta: "<<k1.withdraw(-5)<<" z³"<<endl;
	cout<< "Wyp³acono z konta: "<<k1.withdraw(5)<<" z³"<<endl;
	cout<< "Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	
	cout<< "Wyp³acono na konto: "<<k1.deposite(700)<<" z³"<<endl;
	cout<< "Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	
	cout<< "Wyp³acono z konta: "<<k1.withdrawDebit(1900)<<" z³"<<endl;
	cout<< "Stan konta: "<<k1.getBalance()<<" z³"<<endl;
    //k1.withdraw(5000);
    
	return 0;
}
