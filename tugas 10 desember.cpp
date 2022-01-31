#include"iostream"
#include"conio.h"
#include"stdio.h"
using namespace std;
int main(){
 struct tanggal{
  int tanggal;
  char bulan[10];
  int tahun;
 };
 struct mahasiswa{
  int nim;
  char nama[30];

 };
tanggal t;
mahasiswa mhs;
int b;
int i;
for(i=1; i<=5; i++ ){
cout<<"Data Siswa Ke-"<<i<<endl;
cout<<"Masukan Nim = ";
cin>>mhs.nim;
cout<<"Masukan Nama = ";
cin>>mhs.nama;
cout<<"Masukan Tanggal = ";
cin>>t.tanggal;
cout<<"Masukan Bulan = ";
cin>>t.bulan;
cout<<"Masukan Tahun = ";
cin>>t.tahun;

}

}
