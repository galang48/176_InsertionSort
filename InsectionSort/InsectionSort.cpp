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

void insertionsort() {                  // Procedure Insertionsort

    int temp;                           // Membuat variable data temporer atau penyimpanan sementara
    int i , j;                          // membuat variable i dan j sebagai penanda

    for (i = 1; i <= n - 1; i++) {      // 1. Looping dengan i dimulai dari 1 hingga n-1

        temp = arr[i];                  // 2. simpan nilai arr[i] ke variable sementara temp

        j = i - 1;                      // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp) // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan
                                        // arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];        // 4a. simpan arr[j] ke dalam variable arr[j+1]
            j--;                        // 4b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;              // 5. Simpan nilai temp ke dalam arr[j+1]


        cout << "\nPass " << i << ": ";         // Output ke layar
        for (int k = 0; k < n; k++) {           // Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";              // Output ke layar
        }
    }
}

void display() {                                            // Procedure Display
    cout << endl;                                           // Output baris kosong
    cout << "\n===============================" << endl;    // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    // Output ke layar
    cout << "=================================" << endl;    // Output ke layar

    for (int j = 0; j < n; j++) {                           // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;                             // Output ke layar
    }
    cout << endl;                                           // Output baris kosong
}
int main()
{
    std::cout << "Hello World!\n";
}

