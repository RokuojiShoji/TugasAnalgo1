#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    cout<<"masukkan banyak angka yang akan dimasukkan : ";
    int n; cin >> n;
    int maks, angka[n];
    cout << "Masukkan angka (dipisah spasi) \n";
    for(int i = 0; i < n; i++){
        cin >> angka[i];
    }

    for(int i = 0; i < n - 1; i++) {
        if (angka[i] < angka[i+1]) {
            maks = angka[i+1];
        }
    }
    
    cout << "angka terbesar adalah : " << maks;
    return 0;
}
