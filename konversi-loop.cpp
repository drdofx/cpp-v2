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
  // Jam awal
  int h1, m1, s1;

  // Jam berikutnya
  int h2, m2, s2;

  cout << "Jadwal pertama: "; cin >> h1 >> m1 >> s1;

  int i = 0; // Define index loop
  while (i < 3) {
    // Input jadwal dan print selisih
    cout << "Jadwal berikutnya: "; cin >> h2 >> m2 >> s2;

    cout << "Selisih jadwal adalah: ";
    printSelisih(h1, m1, s1, h2, m2, s2);
    cout << '\n';

    // Reassign variable agar jadwal berikutnya menjadi jadwal awal
    h1 = h2; 
    m1 = m2;
    s1 = s2;

    // Add index
    i++;
  }
}