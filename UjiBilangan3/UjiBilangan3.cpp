#include <iostream>
using namespace std;

int main() {
	int bilangan1, bilangan2;
	string status;
	srand(time(0));

	bilangan1 = rand() % 10;
	bilangan2 = rand() % 10;

	if (bilangan1 = bilangan2)
	{
		status = "Bilangan 1 sama dengan Bilangan 2";
	}
	else if (bilangan1 > bilangan2)
	{
		status = "Bilangan 1 lebih besar dari Bilangan 2";
	}
	else
	{
		status = "Bilangan 1 lebih kecil dari Bilangan 2";
	}
	cout << "Bilangan 1 : " << bilangan1 << endl;
	cout << "Bilangan 2 : " << bilangan2 << endl;
	cout << "Nilai Akhirnya :" << status;
}
