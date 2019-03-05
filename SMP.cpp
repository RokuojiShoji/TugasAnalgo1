// Nama : Fahmi Izzuddin Abdurrahman
// NPM  : 140810170062

#include <iostream>

using namespace std;

int main() {
    int n;

    cout<< "input cuople total : ";cin >> n;
    int man[n+1][n+1];
    int woman[n+1][n+1];
    int manCouple[n+1];
    int womanCouple[n+1];
    int proposal[n+1];

    for (int i = 1; i <= n; i++) {
        womanCouple[i] = 0;
        cout<<"input woman "<< i <<" preference\n"; 
        for(int j = 1; j <= n; j++) {
            cin >> woman[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        manCouple[i] = 0;
        proposal[i] = 1;
        cout<<"input man "<< i <<" preference\n";
        for(int j = 1; j <= n; j++) {
            cin >> man[i][j];
        }
    }

    bool singleMan = true;
    int m = 1;
    while(singleMan) {
        singleMan = false;
        int w = man[m][proposal[m]++];
        if(womanCouple[w] == 0) {
            womanCouple[w] = m;
            manCouple[m] = w;
        } else {
            bool better = false;
            for(int y = 1; y <= n; y++) {
                if(woman[w][y] == womanCouple[w]) {
                    better = false; break;
                }
                if(woman[w][y] == m) {
                    better = true; break;
                }
            }
            if(better) {
                manCouple[womanCouple[w]] = 0;
                womanCouple[w] = m;
                manCouple[m] = w;
            }
        }

        for(int x = 1; x <= n; x++) {
            if(manCouple[x] == 0) {
                m = x;
                singleMan = true;
                break;
            }
        }
    }

    for(int i = 1; i <= n;  i++) {
        cout << i << " " << manCouple[i] << endl;
    }
    return 0;
}