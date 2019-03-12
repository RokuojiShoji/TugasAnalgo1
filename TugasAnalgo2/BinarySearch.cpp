#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int i = 1, j = 11;
    int n = 1, y, array[11] = {1, 2, 3, 4, 5, 6, 7, 9, 12, 13, 15};
    bool found = false;

    cout << "masukkan nilai y : "; cin >> y;
    
    while(n <= 11 && found == false) {
        int mid = (i + j) / 2;
        if (array[mid] == y)        //ini ngebug gatau kenapa if nya jalan trs
            found = true;
        else if (y > array[mid])
            i = mid + 1;
        else
            j = mid - 1;
        n++;
    }
    if (found == true) {
        cout << "y ditemukan ";
    } else {
        cout << "y tidak ditemukan";
    }
    return 0;
}

/