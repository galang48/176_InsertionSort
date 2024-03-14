#include <iostream>
using namespace std;

int arr[20];                                            // Membuat Array dengan panjang data 20
int n;                                                  // Membuat Variable inputan n

void input() {                       // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";   // Membuat Inputan jumlah element Array
        cin >> n;                                       // memanggil variable inputan n

        if (n <= 20) {                                  // Membuat Kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";      // Menampilkan pesan jika data lbih dari 20
        }
    }
    cout << endl;
    cout << "=====================" << endl;                                 // Membuat Jarak per baris program
    cout << "Masukkan Elemen Array" << endl;                                 // Membuat tampilan susunan data elemen Array
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)                                              // Menggunakan perulangan for untuk menyimpan data pada Array
    {
        cout << "Data ke-" << (i + i) << ": ";                               // Memasukkan atau menginputkan nilai data n
        cin >> arr[i];                                                       // Menyiapkan nilai data n kedalam Array arr
    }

}
int main()
{
    std::cout << "Hello World!\n";
}

