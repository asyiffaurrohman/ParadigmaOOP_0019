#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;
    
    void printData()
    {
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi :" << tanggalproduksi << endl;
    }
 
}; //batas class

int main(){
    Barang.elektronik;
    elektronik.nama = tablet;
    elektronik.jumlah = 12;
    elektronik.kategori = elektronik;
    elektronik.TanggalProduksi = 2024.04;

    elektronik.printdata();
    cout << endl;

    Barang Non;
    Non.nama = pulpen;
    Non.jumlah = 10;
    Non.kategori = NonElektronik;
    Non.TanggalProduksi = 2024.05;

    Non.printdata();
    
}
