//Program Kelulusan 
//Buatlah Program dimana pengguna akan memasukkan nilai Matematika dan Bahasa , Fisika
//Jika nilai rerata nilai lebih dari 60 atau Matematika lebih dari 70 maka dinyatakan lulus 
//Selain daripada itu tidak lulus 

#include <iostream>
using namespace std;

int main() {
	int nilMtk, nilBahasa, nilFisika;
	string status;
	float rerata;

	cout << "Nilai Matematika : " << endl;
	cin >> nilMtk;
	cout << "Nilai Bahasa : " << endl;
	cin >> nilBahasa;
	cout << "Nilai Fisika : " << endl;
	cin >> nilFisika;

	rerata = (nilBahasa + nilMtk + nilFisika) / 3;

	if (nilMtk > 70 || rerata > 60) {
		status = "Lulus";
		if (nilFisika >= 90 ) {
			status = "Lulusan Terbaik";
		}
	}
	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai Matematika : " << nilMtk << endl;
	cout << "Nilai Bahasa : " << nilBahasa << endl;
	cout << "Nilai Fisika : " << nilFisika << endl;
	cout << "status kelulusan : " << status;

}