#include <iostream> 
using namespace std;
int main()
{
  int pilihan;
  char ulang;
  do
  {
  	cout << endl;
    cout << " =======MENU=======" << endl;
    cout << " 1. Baca data" << endl;
    cout << " 2. Cetak data" << endl;
    cout << " 3. Ubah data" << endl;
    cout << " 4. Hapus data" << endl;
    cout << " 5. Keluar program" << endl;
    cout << endl;
 
    cout << " Pilihan anda =";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << " Anda memilih nomor 1" << endl;
        break;
    case 2:
        cout << " Anda memilih nomor 2" << endl;
        break;
    case 3:
        cout << " Anda memilih nomor 3" << endl;
        break;
    case 4:
        cout << " Anda memilih nomor 4" << endl;
        break;
    case 5:
        cout << " Anda memilih nomor 5" << endl;
        break;
    default:
        cout <<  "Menu tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << " Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << endl;
  return 0;
}
