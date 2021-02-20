#include "keluar.h"

int user(){

	int request{}, num{1};
	cout << "\n\t===) GRENWITCH (===" << endl << endl ;
	string draf[]{"Informasi","Tabungan","Tarik-Tunai","Exit"};
	for(const auto& get : draf){
		cout << " [" << (num++) << "] " << get << endl ;
	}
	cout << "\n     Key: " ;
	cin >> request ;

	return request ;
}

int main(){

	Keluar::Saldo::User* s1 = new Keluar::Saldo::User(); 
	int users = user();
	char again{};
	enum us {INFO=1, ADD, DEL, EXIT};
	long long money{};
	while(users != EXIT){
		switch(users){

			case INFO:
				cout << "Informasi" << endl ;
				s1->Informasi::Saldo::User::cetak_info_saldo();
				break;
			case ADD:
				cout << "Tabungan" << endl ;
				cout << "Entry Money[+]: " ; cin >> money ;
				s1->Masuk::Saldo::User::addMoney(money);
				break;
			case DEL:
				cout << "Tarik-Tunai" << endl ;
				cout << "Entry Money[-]: " ; cin >> money ;
				s1->Keluar::Saldo::User::sendMoney(money);
				break;
				 
		}

		back:
		cout << "Back:[ Y/n ] : " ;
		cin >> again ;
		if (tolower(again) == 'y')
		{
			users = user();
		}else if (tolower(again) == 'n')
		{
			break;
		}else{
			goto back ;
		}
	}
	cout << "Thanks for using this program" << endl ;
	cin.get();
	return 0;
}