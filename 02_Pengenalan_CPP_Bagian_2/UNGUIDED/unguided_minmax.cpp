#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum dari array
int cariMaksimum(int arr[], int n) {
    int maksimum = arr[0]; // Inisialisasi nilai maksimum dengan elemen pertama
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i]; // Update nilai maksimum jika ditemukan nilai yang lebih besar
        }
    }
    return maksimum;
}

// Fungsi untuk mencari nilai minimum dari array
int cariMinimum(int arr[], int n) {
    int minimum = arr[0]; // Inisialisasi nilai minimum dengan elemen pertama
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i]; // Update nilai minimum jika ditemukan nilai yang lebih kecil
        }
    }
    return minimum;
}

// Fungsi untuk menghitung rata-rata dari array
float cariRataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i]; // Menjumlahkan semua elemen array
    }
    return static_cast<float>(total) / n; // Mengembalikan hasil rata-rata
}

int main() {
    int n;
    
    // Meminta input jumlah elemen dari pengguna
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    int arr[n]; // Membuat array dengan ukuran sesuai input pengguna
    
    // Meminta input elemen array dari pengguna
    cout << "Masukkan elemen-elemen array: \n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int pilihan;
    do {
        // Menampilkan menu pilihan
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                // Menampilkan nilai maksimum
                cout << "Nilai maksimum adalah: " << cariMaksimum(arr, n) << endl;
                break;
            case 2:
                // Menampilkan nilai minimum
                cout << "Nilai minimum adalah: " << cariMinimum(arr, n) << endl;
                break;
            case 3:
                // Menampilkan nilai rata-rata
                cout << "Nilai rata-rata adalah: " << cariRataRata(arr, n) << endl;
                break;
            case 4:
                // Keluar dari program
                cout << "Keluar dari program.\n";
                break;
            default:
                // Menampilkan pesan jika pengguna memasukkan pilihan yang tidak valid
                cout << "Pilihan tidak valid, silakan pilih antara 1-4.\n";
        }
    } while (pilihan != 4); // Program akan terus berjalan sampai pengguna memilih opsi keluar

    return 0;
}
