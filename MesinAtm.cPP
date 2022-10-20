#include <iostream>
#include <string>
using namespace std;

int main(){
	string pin;
	double sisa;
	double nominal;
	int menu;
	login: // label
	cout << "Masukkan Pin : ";
	cin>>pin;
	if(pin == "123456")
	{
		float saldo = 100000; // harusnya dari database
		float nominal;
		string rekening;
		cout << "=================================="<<endl;
		cout << "= Selamat datang di ATM Samsudin ="<<endl;
		cout << "=                                ="<<endl;
		cout << "= 1> 100.000        Cek Saldo <5 ="<<endl;
		cout << "= 2> 200.000        Transfer  <6 ="<<endl;
		cout << "= 3> 500.000        Nabung    <7 ="<<endl;
		cout << "= 4> 1000.000        Keluar   <8 ="<<endl;
		cout << "=                                ="<<endl;
		cout << "=================================="<<endl;
		cout << "Masukkan pilihan menu : ";
		cin>>menu;
		if(menu == 1)
		{
			sisa = saldo-100000;
			if(sisa >= 50000)
			{
				cout << "Anda menarik uang seumlah 100.000"<<endl;
				cout << "Sisa saldo anda yaitu : "<< sisa;
			}
			else
			{
				cout << "Saldo anda kurang";
			}
		}
		else if(menu == 2)
		{
			sisa = saldo-200000;
			if(sisa >= 50000)
			{
				cout << "Anda menarik uang seumlah 100.000"<<endl;
				cout << "Sisa saldo anda yaitu : "<< sisa;
			}
			else
			{
				cout << "Saldo anda kurang";
			}
		}
		else if(menu == 3)
		{
			sisa = saldo-500000;
			if(sisa >= 50000)
			{
				cout << "Anda menarik uang seumlah 100.000"<<endl;
				cout << "Sisa saldo anda yaitu : "<< sisa;
			}
			else
			{
				cout << "Saldo anda kurang";
			}
		}
		else if(menu == 4)
		{
			sisa = saldo-1000000;
			if(sisa >= 50000)
			{
				cout << "Anda menarik uang seumlah 100.000"<<endl;
				cout << "Sisa saldo anda yaitu : "<< sisa;
			}
			else
			{
				cout << "Saldo anda kurang";
			}
		}
		else if(menu == 5)
		{
			cout << "Sisa saldo anda "<< saldo;
		}
		else if(menu == 6)
		{
			cout << "Masukkan rekening : ";
			cin >> rekening;
			cout << "Masuukkan nominal : ";
			cin >> nominal;
			sisa = saldo - nominal;
			if(sisa >= 50000){
				cout << "anda mentransfer uang ke " << rekening << "dengan jumlah :"<<nominal;
				cout << endl << "Sisa saldo anda : "<< sisa;
			}
			else{
				cout << "saldo anda kurang";
			}
		}
		else if(menu == 7)
		{
			cout << "Masukkan nominal yang di tabung : ";
			cin >> nominal;
			saldo = saldo + nominal;
			cout << "Anda Menabung uang sebanyak : "<< nominal << endl;
			cout << "Saldo anda sekarang : "<< saldo;
		}
		else if(menu == 8)
		{
			cout << "Terima kasih menggunakan atm ini";
		}

	}
	else
	{
		goto login;
	}
}
