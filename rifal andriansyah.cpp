/*
    Nama  : Mochamad Rifal Andrianyah
    kelas : TI(A)
    NIM   : 2230511036
*/

//program penjualan tiket kapal laut

#include<iostream>
using namespace std;

int main(){
    int jumlah,harga,pilihan;

    cout<<"**********DAFTAR TIKET KAPAL LAUT**********" << endl;
    string daftar[3]={"1.EKONOMI","2.BISNIS","3.EKSEKUTIF"};
    for (int i=0;i<3;i++){
        cout << daftar[i]<< endl ;
    }
    cout<<"*******************************************" << endl;

    cout<<"masukan pilihan : ";
    cin>>pilihan;

    if(pilihan==1){
        harga=2500000;
    }
    else if(pilihan==2){
        harga=3000000;
    }
    else if(pilihan==3){
        harga=3500000;
    }

    switch(pilihan){
    case 1:
        cout<<"harga tiket Rp.2500.000/orang" << endl;
        break;
    case 2:
        cout<<"harga tiket Rp.3000.000/orang" << endl;
        break;
    case 3:
        cout<<"harga tiket Rp.3500.000/orang" << endl;
        break;
    default :
        cout<<"nomor yang anda masukan salah" << endl;

    }

    cout<<"masukan jumlah : ";
    cin>>jumlah;

    if (jumlah>0){
        cout<<"total bayar : Rp" <<jumlah*harga;
    }
}
