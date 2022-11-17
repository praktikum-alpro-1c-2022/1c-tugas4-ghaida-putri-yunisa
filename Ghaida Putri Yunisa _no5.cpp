#include <iostream>
using namespace std;

int main (){
    int kodeSusu, jumlahPembelian;
    float totalHarga;
    string ukuran;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;
    cout << " " << endl;

    cout << "==  Kode Susu  ==  Nama Produk  ==     Ukuran    ==     Harga     ==" << endl;
    cout << "|| 1           || Dancow        ||  (B) Besar    || Rp. 10.000    ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 4.500     ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 2.100     ||" << endl;
    cout << "|| 2           || Indomilik     ||  (B) Besar    || Rp. 8.500     ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 4.000     ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 2.025     ||" << endl;
    cout << "|| 3           || Sustacal      ||  (B) Besar    || Rp. 17.000    ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 14.500    ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 8.300     ||" << endl;

    cout << " " << endl;
    cout << "Masukan Kode Susu (1,2,3)= ";
    cin >> kodeSusu;
    cout << "Masukan Total Pembelian = ";
    cin >> jumlahPembelian;
    cout << "Masukan Ukuran Susu (B/S/K) = ";
    cin >> ukuran;

        if (kodeSusu == 1){
            if (ukuran == "B"){
                totalHarga = (jumlahPembelian * 10000);
                cout << "Susu Dancow" << endl;
                cout << "Harga Rp. 10.000" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "S"){
                totalHarga = (jumlahPembelian * 4500);
                cout << "Susu Dancow" << endl;
                cout << "Harga Rp. 4.250" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "K"){
                totalHarga = (jumlahPembelian * 2100);
                cout << "Susu Dancow" << endl;
                cout << "Harga Rp. 2.100" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else {
                cout << "Jumlah dan ukuran tidak sesuai, Mohon masukan jumlah dan ukuran yang sesuai!";
            }


        }else if (kodeSusu == 2){
            if (ukuran == "B"){
                totalHarga = (jumlahPembelian * 8500);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 8.500" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "S"){
                totalHarga = (jumlahPembelian * 4000);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 4.000" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "K"){
                totalHarga = (jumlahPembelian * 2025);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 2.025" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else {
                cout << "Jumlah dan ukuran tidak sesuai, Mohon masukan jumlah dan ukuran yang sesuai!";
            }


        }else if (kodeSusu == 3){
            if (ukuran == "B"){
                totalHarga = (jumlahPembelian * 8500);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 8.500" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "S"){
                totalHarga = (jumlahPembelian * 4000);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 4.000" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else if (ukuran == "K"){
                totalHarga = (jumlahPembelian * 2025);
                cout << "Susu Indomilk" << endl;
                cout << "Harga Rp. 2.025" << endl;
                cout << "Jumlah Harga = " << totalHarga << endl;
            }else {
                cout << "Jumlah dan uk3uran tidak sesuai, Mohon masukan jumlah dan ukuran yang sesuai!";
            }


        }else {
            cout << "Harap Masukan Pilian yang tersedia" << endl;
        }


return 0;
}
