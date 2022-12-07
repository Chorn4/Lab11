#include <iostream>
#include <Windows.h>

using namespace std;
int main() {
    int ar1[200]{}, ar2[200]{};
    int plus;

    for (int i = 0; i < 200; ++i) {
        ar1[i] = rand() % 150 - 100;
    }
    for (int i = 0, f = 0, sum1 = 0, sum2 = 0, ar3[200]{}; i < 200; ++i) {
        if (ar1[i] >= 0) {
            plus = 1;
        }
        else {
            plus = 0;
        }
        if (plus) {
            ar3[f] = ar1[i];
            sum1 += ar1[i];
            ++f;
        }
        else {
            if (sum2 == 0) {
                sum2 = sum1;
                for (int i = 0; i < 200; ++i) {
                    ar2[i] = ar3[i];
                }
                for (int i = 0; i < 200; ++i) {
                    ar3[i] = 0;
                }
                sum1 = 0, f = 0;
            }
            else if (sum2 >= sum1) {
                for (int i = 0; i < 200; ++i) {
                    ar3[i] = 0;
                }
                sum1 = 0, f = 0;
            }
            else if (sum2 < sum1) {
                sum2 = sum1;
                for (int i = 0; i < 200; ++i) {
                    ar2[i] = ar3[i];
                }
                for (int i = 0; i < 200; ++i) {
                    ar3[i] = 0;
                }
                sum1 = 0, f = 0;
            }
        }
    }
    for (int i = 0; i < 200; ++i) {
        if (ar2[i] != 0) {
            cout << ar2[i] << '\t';
        }
    }


    return 0;
}
