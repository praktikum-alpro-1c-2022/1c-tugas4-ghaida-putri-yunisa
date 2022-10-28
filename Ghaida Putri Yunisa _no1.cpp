#include <iostream>
using namespace std;

int main (){
    int bilangan;


    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Masukan Bilangan : ";
    cin >> bilangan;

    if (bilangan % 2 == 0){
        cout << "Anda masukan bilangan genap : " << bilangan << endl;
    }else{
        cout << "Anda masukan bilangan ganjil : " << bilangan << endl;
    }

return 0;
}
