#include <iostream>

using namespace std;

double hitungRata(int arr[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    double rata = total / n;

    return rata;
}

int hitungJumlah(int arr[], int n) {
    int total = 0.0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}

int main() {
    int bil1, bil2, hasil;

    cout << "Fungsi program tambah 2 Bilangan " << std::endl;
    cout<< std::endl;

    cout << "Masukkan bilangan pertama 1: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua 2: ";
    cin >> bil2;

    hasil = bil1 + bil2;

    cout << "Hasil penjumlahan " << bil1 << " dan " << bil2 << " adalah " << hasil << endl;

   // int bil1, bil2, hasil;

    cout << " Fungsi program kurang 2 Bilangan " << std::endl;
    cout<< std::endl;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    hasil = bil1 - bil2;

    cout << "Hasil pengurangan " << bil1 << " dari " << bil2 << " adalah " << hasil << endl;

     int n;

    cout << "Fungsi untuk menghitung jumblah nilai total dari sebuah array" << std::endl;
    cout<< std::endl;


    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    double rata = hitungRata(arr, n);

    cout << "Rata-rata dari array adalah: " << rata << endl;

    //int n;

    cout << " menghitung rata-rata dari array" << std::endl;
    cout<< std::endl;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    //int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int total = hitungJumlah(arr, n);

    cout << "Total nilai dari array adalah: " << total << endl;


    return 0;
}


