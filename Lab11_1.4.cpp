#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

float function(int number, float x) {
    if (number == 8) {
        return 6.9 * log10(abs(6 + x)) + cos(4.6 * x);
    }
    else if (number == 9) {
        return 7 * log10(3.8 + abs(x)) / (pow(x, 2) + 2);
    }


    return 0;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a, b, z;
    int i = 3, k;

    for (int f = i; f < i + 5; ++f) {
        a += function(i + 5, f);
    }
    for (int f = i; f < i + 8; ++f) {
        b += function(i + 6, f);
    }
    z = tan(b) - a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;


    return 0;
}