#include <iostream>

using namespace std;

int main() {
    int matrix[5][5]{}, ar1[5]{}, ar2[5]{};

    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            matrix[i][f] = rand() % 250 - 150;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            cout << matrix[i][f] << '\t';
        }
        cout << endl;
    }
    for (int i = 0; i < 5; ++i) {
        for (int f = 0, a1 = 0, a2 = 0; f < 5; ++f) {
            if (i == 0) {
                ar1[a1++] = matrix[i][f];
            }
            else if (i == 4) {
                ar2[a2++] = matrix[i][f];
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int f = 0, a1 = 0, a2 = 0; f < 5; ++f) {
            if (i == 0) {
                matrix[i][f] = ar2[a1++];
            }
            else if (i == 5) {
                matrix[i][f] = ar1[a2++];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            cout << matrix[i][f] << '\t';
        }
        cout << endl;
    }


    return 0;
}