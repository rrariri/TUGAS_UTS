//program mencari mini & maxi 
#include <iostream> 
using namespace std; 

//prototype 
	void prosesInput ();
	void prosesPilih ();
	void PilihanA ();
	void PilihanB ();
	
//variabel global 
	int g, angka;
	char pilih;
	int jumlah=1;
	
//program utama
	int main () {
		
		prosesInput ();
		prosesPilih ();
		return 0;
	
	}
	
//proses input data 

    void prosesInput (){
		cout << " Masukan Jumlah Data Yang Diinginkan : ";
		cin >> g;
	}
		
//proses pilih
	void prosesPilih (){
		int mini, maxi;
		
		PILIHAN_PENCARIAN :
		
		cout << " == Silahkan Pilih A atau B == " << endl << endl; 
		cout << " A. Mencari Minimum " << endl;
		cout << " B. Mencari Maximum " << endl;
		cout << " =============================== " << endl; 
		cout << " Pilihan Anda : ";
		cin >> pilih;
			if (pilih == 'a') {
				PilihanA ();
			}
				else if (pilih == 'b'){
					PilihanB ();
				}
					else {
						goto PILIHAN_PENCARIAN;
					}
		cin.get();
	}

//proses minimum 
	void PilihanA(){
		int mini;
		for (int x=1;x<=g;x++) {
			cout << " Masukan Angka : ";
			cin >> angka; 
			if (x == 1) {
				mini = angka;
			}
				else if (mini > angka) {
					mini = angka; 
					jumlah=1;
				}
					else if (mini < angka) {}
					
						else if (mini = angka) {
							jumlah++;
						}
							else {}
			}
		cout << " =========================== " << endl;
		cout << " Data Minimum => " << mini << endl;
		cout << " Banyak Data => " << jumlah << endl; 
}
	
//proses maximum 
	void PilihanB(){
		int maxi;
		for (int x=1;x<=g;x++) {
			cout << " Masukan Angka : ";
			cin >> angka; 
			if (x == 1) {
				maxi = angka;
			}
				else if (maxi < angka) {
					maxi = angka;
					jumlah=1;
				}
					else if (maxi > angka) {}
					
						else if (maxi = angka) {
							jumlah++;
						}
							else {}
		}
	cout << " =============================== " << endl;
	cout << " Data Maximum => " << maxi << endl;
	cout << " Banyak Data => " << jumlah << endl; 
}