#include <iostream>

using namespace std;

int main() {
	//MULAI
	int NIM, NUTS, NUAS, NA;
	string nama, Status; //buat tipe data disini pake string biar lebih mudah dalam penginputan
	
	//START - Read NIM, nama, NUTS, NUAS
	cout << "NIM\t: ";
	cin >> NIM;
	fflush(stdin); //ini fungsinya untuk membersihkan buffer, intinya supaya ga error buat input variabel nama dibawahnya
	
	cout << "Nama\t: ";
	getline(cin, nama); //disini pake getline supaya spasinya bisa keinput, karena nama panjang harus pake spasi

	cout << "NUTS\t: ";
	cin >> NUTS;
	
	cout << "NUAS\t: ";
	cin >> NUAS;
	//END - Read NIM, nama, NUTS, NUAS
	
	//PENGKONDISIAN - NUTS > 70
	if (NUTS > 70) {
		//TRUE - YES
		NA = NUTS;
		Status = "LULUS";
		
	//FALSE - NO
	} else {
		
		//DEKLARASI NA - (NA = (NUTS * 0.4) + (NUAS * 0.6)
		NA = ((NUTS * 0.4) + (NUAS * 0.6));
		
		//PENGKONDISIAN LAGI - NA >= 60
		if(NA >= 60) {
			//TRUE - YES
			Status = "LULUS";
		} else {
			//FALSE - NO
			Status = "TIDAK LULUS";
		}
	}
	
	//Print NIM, nama, NA, Status
	cout << endl << "NIM\t: " << NIM << endl;
	cout << "NAMA\t: " << nama << endl;
	cout << "NA\t: " << NA << endl;
	cout << "Status\t: " << Status << endl;
	
	//Selesai
}
