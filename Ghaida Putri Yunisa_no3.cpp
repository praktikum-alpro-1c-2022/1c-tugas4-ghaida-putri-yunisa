#include <iostream>
using namespace std;

int main (){
    int tahun;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Masukan tahun = ";
    cin >> tahun;

    if (tahun % 400 == 0){
        cout << "adalah tahun kabisat" << endl;
    }
    else if (tahun % 100 == 0){
        cout << " bukan tahun kabisat" << endl;
    }
    else if (tahun % 4 == 0){
        cout << "adalah tahun kabisat" << endl;
    }
    else {
        cout << tahun << " bukan tahun kabisat" << endl;
    }

return 0;
}
