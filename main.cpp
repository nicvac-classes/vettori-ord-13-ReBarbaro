#include <iostream>
using namespace std;
#include <vector>


int main() {
    srand(time(0));   //Seed random number generator
    
    int i, j, t;
    double n;

    cout << "quanti elementi ci sono ?" << endl;
    cin >> n;
    int r[n];

    i = 0;
    while (i < n) {
        r[i] = rand() % (n * 10 + 1);
        i = i + 1;
    }
    i = 0;
    t = 0;
    j = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    j = 0;
    i = 0;
    while (j < n) {
        if (r[j] % 2 == 0) {
            cout << "il" << i + 1 << "numero pari è" << r[j] << endl;
            i = i + 1;
        }
        j = j + 1;
    }
    j = 0;
    i = 0;
    while (j < n) {
        if (r[j] % 2 != 0) {
            cout << "il" << i + 1 << "numero dispari è" << r[j] << endl;
            i = i + 1;
        }
        j = j + 1;
    }
    
}

