#include <iostream>
using namespace std;

struct DetailAlamat{
   string desa;
   string kota;
   string  provinsi;
};

struct mahasiswa(){
    string nim;
    string nama;
   DetailAlamat alamat;
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
    cout << "\n Umur : "<<mhs.alamat;

    }

int main(){

}
