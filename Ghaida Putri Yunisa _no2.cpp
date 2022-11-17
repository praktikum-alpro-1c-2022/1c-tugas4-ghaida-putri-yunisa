#include <iostream>
using namespace std;

int main (){
    string username, password;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Masukan username = ";
    cin >> username;
    cout << "Masukan password = ";
    cin >> password;


    if(username == "ghaida" && password == "ghaida01"){
        cout << "Username dan password sesuai, Login berhasil" << endl;

    }else if (username == "ghaida" && password != "ghaida01"){
        cout << "Username sesuai, password tidak sesuai" << endl;

    }else if (username != "ghaida" && password == "ghaida01"){
        cout << "Username tidak sesuai, password sesuai" << endl;

    }else {
        cout << "Username dan password tidak sesuai" << endl;
    }

return 0;
}
