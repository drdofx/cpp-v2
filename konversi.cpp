#include <iostream>
using namespace std;

// Function untuk print selisih waktu antara dua jam
void printSelisih(int h1, int m1, int s1, int h2, int m2, int s2) {
  int selisih;

  int jam_pertama_dalam_sekon = (h1 * 3600) + (m1 * 60) + s1;
  int jam_kedua_dalam_sekon = (h2 * 3600) + (m2 * 60) + s2;

  /*
  Conditional untuk cek apakah jumlah sekon dalam jam kedua lebih kecil dari jam kedua
  Jika iya maka jam kedua dianggap sebagai hari berikutnya dan ditambah 24 jam (atau 86400 dalam sekon)
  */
  if (jam_pertama_dalam_sekon > jam_kedua_dalam_sekon) {
    jam_kedua_dalam_sekon += 86400;
    selisih = jam_kedua_dalam_sekon - jam_pertama_dalam_sekon;
  } else {
    selisih = jam_kedua_dalam_sekon - jam_pertama_dalam_sekon;
  }
  
  int jam = selisih / 3600;
  selisih %= 3600;

  int menit = selisih / 60;
  selisih %= 60;

  int detik = selisih;

  cout << jam << " jam " << menit << " menit " << detik << " detik\n";
}

int main() {
  // Jam pertama
  int h1, m1, s1;

  // Jam kedua
  int h2, m2, s2;

  // Jam ketiga
  int h3, m3, s3;

  // Jam keempat
  int h4, m4, s4;

  cout << "Jadwal pertama: "; cin >> h1 >> m1 >> s1; // Jam pertama

  cout << "Jadwal kedua: "; cin >> h2 >> m2 >> s2; // Jam kedua

  cout << "Selisih jadwal kedua - jadwal pertama adalah: ";
  printSelisih(h1, m1, s1, h2, m2, s2);
  cout << '\n';

  cout << "Jadwal ketiga: "; cin >> h3 >> m3 >> s3; // Jam ketiga

  cout << "Selisih jadwal ketiga - jadwal kedua adalah: ";
  printSelisih(h2, m2, s2, h3, m3, s3);
  cout << '\n';

  cout << "Jadwal keempat: "; cin >> h4 >> m4 >> s4; // Jam keempat;

  cout << "Selisih jadwal keempat - jadwal ketiga adalah: ";
  printSelisih(h3, m3, s3, h4, m4, s4);
  cout << '\n';
}