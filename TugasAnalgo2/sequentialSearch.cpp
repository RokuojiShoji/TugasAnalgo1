#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int i = 1, y, array[10] = {2, 3, 1, 4, 7, 9, 5, 12, 15, 13};
    bool found = false;

    cout << "masukkan nilai y : "; cin >> y;

    while(i <= 10 && found == false) {
        if (array[i - 1] == y) {
            found = true;
        } else {
            i += 1;
        }
    }
    if (found == true) {
        cout << "y ditemukan";
    } else {
        cout << "y tidak ditemukan";
    }
    return 0;
}
