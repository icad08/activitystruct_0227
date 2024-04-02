#include <iostream>
using namespace std;

struct mahasiswa(){
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main (){
    mahasiswa mhs;
    cout << "nomor mahasiswa : " ;
    cin >> mhs.nim;
    cout << "nama mahasiswa  : ";
    cin >> mhs.nama;
    cout << "alamat mahasiswa : ";
    cin >>  mhs.alamat;
    cout << "umur mahasiswa   : ";
    cin >> mhs.umur;

    cout << endl;
    cout <<"\n NIM : "<<mhs.nim;
    cout << "\n Nama : "<<mhs.nama;
    cout << "\n Alamat : "<<mhs.alamat;
    cout << "\n Umur : "<<mhs.umur;

}
