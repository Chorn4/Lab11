#include <iostream>
#include <Windows.h>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum, matrix[5][5]{};

    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            matrix[i][f] = rand() % 250 - 150;
        }
    }
    cout << "Завдання 1: " << endl;

    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            if (matrix[i][f] >= 0) {
                cout << matrix[i][f] << '\t';
            }
        }
    }
    cout << endl << endl << "Завдання 2: " << endl;

    for (int i = 0; i < 5; ++i) {
		if (matrix[i][i] >= 0) {
			sum += matrix[i][i];
        }
    }
    cout << sum << endl;
    cout << endl << "Завдання 3: " << endl;

    for (int i = 0; i < 5; ++i) {
		matrix[i][i] = 1;
	}
	for (int i = 1; i < 5; ++i) {
		matrix[i][i - 1] = 0;
    }
	for (int i = 1; i < 5; ++i) {
		matrix[i - 1][i] = i + i;
	}
    for (int i = 0; i < 5; ++i) {
        for (int f = 0; f < 5; ++f) {
            cout << matrix[i][f] << '\t';
        }
        cout << endl;
    }


    return 0;
}