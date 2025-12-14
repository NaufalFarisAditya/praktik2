#include<iostream>
using namespace std;

int main()
{
	double nilai;

	cout << "=== Program Penentuan Nilai Beserta Naik Kelas/Tinggal Kelas ===" << endl;
	cout << "Masukkan nilai angka:";
	cin >> nilai;
	cout << "\nHasil:" << endl;

	if (nilai > 89)
	{
		cout << "Nilai A (Naik Kelas)" << endl;
		cout << "A Nya Apa??, Annjaayyy" << endl;
	}
	else if (nilai > 80 && nilai <= 89)
	{
		cout << "Nilai B (Naik Kelas)" << endl;
		cout << "B Nya Apa??, Baikkk" << endl;
	}
	else if (nilai > 70 && nilai <= 80)
	{
		cout << "Nilai C (Naik Kelas)" << endl;
		cout << "C Nya Apa??, Caakeeppp" << endl;
	}
	else if (nilai > 60 && nilai <= 79)
	{
		cout << "Nilai D (Tinggal Kelas)" << endl;
		cout << "D Nya Apa??, Kelazz Deerrr" << endl;
	}
	else if (nilai <= 60)
	{
		cout << "Nilai E (Tinggal Kelas)" << endl;
		cout << "E Nya Apa??, ENGINEERRIINGG" << endl;
	}
	
	return 0;
}