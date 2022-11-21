/*Mohammad Baharudin Yusuf Soal 1 */
#include <iostream>
using namespace std;
int pokok(int);
float lembur(float);
int makan(int);
int transport(int);

int main(){
    int nip,jam;
    string nama;
    cout << "Masukkan NIP : \n";
    cin >> nip;
    cout << "Masukkan nama : \n";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja :\n";
    cin >> jam;
    cout << "NIP\n" << nip << endl << "Nama\n" << nama << endl << "Gaji Pokok\n" << pokok(jam) << endl;
    cout << "Lembur\n" << lembur(jam) << endl;
    cout << "Uang Makan\n" << makan(jam) << endl;
    cout << "Transport\n" << transport(jam);
    return 0;
}

int pokok(int jam){
    if (jam <= 8) {
        return(jam*7500);
    } else if(jam > 8) {
        return(8*7500);
    }
}

float lembur(float jam){
    if (jam > 8) {
        return((jam-8)*(7500*1.5));
    } else {
        return 0;
    }
}

int makan(int jam){
    if (jam >= 9) {
        return(10000);
    } else {
        return 0;
    }
}

int transport(int jam){
    if (jam >= 10) {
        return(13000);
    } else {
        return 0;
    }
}