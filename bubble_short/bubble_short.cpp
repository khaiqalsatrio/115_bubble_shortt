#include <iostream>
using namespace std;


int a[20];               //Deklarasi array a dengan ukuran 20 
int n;                     //Deklarasi variasi n untuk menyimpan banyak elemen pada aray 


void input() {            // prosedur untuk input 
	while (true) {           // loping
		cout << "masukan banyak elemen pada array : "; // Output ke larar 
		cin >> n;         // input dari pengguna 
		if (n <= 20)      // jika keluar dari atau sama dengan 20
			break;        // keluar dari 20 
		else {            // jika n lrbih dari 20
			cout << "\nAray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "====================" << endl;
	
	for (int i = 0; i < n; i++) { // looping dengan 1 dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; // Output ke Layar
		cin >> a[i];					// Input dari pengguna
	}
}
void bubbleSortArray() {	//procedur untuk mengurutkan array dengan metode bubble}
	for (int i = 1; i < n; i++) { //Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) { //Looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) { // Jika nilai pada a{j} lebih besar dari a[j+l]
				int temp = a[j];   //Simpan nilai a[j] ke variabel sementara tetap
				a[j] = a[j + 1];   //assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;   //assogn nilai temp ke a[j+1]
			}
		}
	}
}
void unsorted() {
	cout << endl;							//output baris kosong
	cout << "==================================" << endl; //Output ke layar
	cout << "Element Array yang belum tersusun" << endl; //Output ke layar
	cout << "==================================" << endl; //Output ke Layar
	for (int j = 0; j < n; j++) {							//Looping dengan j dari 0 hingga n-1
		cout << a[j] << endl;								// Output ke Layar
	}
	cout << endl;
}

void display() { // procedur untuk menampilkan hasil
	cout << endl;							//output baris kosong
	cout << "==================================" << endl; //Output ke layar
	cout << "Element Array yang belum tersusun" << endl; //Output ke layar
	cout << "==================================" << endl; //Output ke Layar
	for (int j = 0; j < n; j++) {							//Looping dengan j dari 0 hingga n-1
		cout << a[j] << endl;								// Output ke Layar
	}
	cout << endl;
}
int main() {
	input();	// Memanggil procedur read()
	unsorted();	  //Memanggil proceedur unsorted() dari
	bubbleSortArray();  // Memanggil procedur  bubbleSortArray()
	display();		// Memanggil procedur display()

	return 0;
}