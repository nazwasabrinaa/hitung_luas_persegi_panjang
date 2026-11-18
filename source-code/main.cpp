#include <iostream>
using namespace std;

int main() {
  //DEKLARASI 
  float panjang, lebar, luas;

  //INPUT
  cout << "masukkan nilai panjang : "<<endl;
  cin >>panjang;
  cout << "masukkan nilai lebar : "<<endl;
  cin >>lebar;

  //PROSES
  cout << "hitung luas persegi panjang : "<<endl;

  luas = panjang * lebar;

  //OUTPUT
  cout << "tampilkan hasil luas persegi panjang : "<<luas<<endl;
  
  return 0;
}
