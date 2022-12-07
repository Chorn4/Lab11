#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

void PrintArray(int arr[10]) {
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << '\t';
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Завдання 1
    cout << "Завдання 1: " << endl;

    int number, c1 = 0, ar1[10]{ 1, 2, 7, 24, 0, 9, 22, 8, 20, 7 };
    PrintArray(ar1);

    cout << endl << "Введіть число: ";
    cin >> number;

    for (int i = 0; i < 10; ++i) {
        if (ar1[i] > number) {
            ++c1;
        }
    }
    cout << "Кількість елементів у масиві, що більші за " << number << ": " << c1 << endl;
    // Завдання 2
    cout << endl << "Завдання 2: " << endl;

    int c2 = 0, ar2[10]{ 7, 1, 3, 4, 9, 6, 7, 9, 8, 2 };
    PrintArray(ar2);

    for (int i = 0; i < 10; ++i) {
        if (i != 9) {
            for (int j = i + 1; j < 10; ++j) {
                if (ar2[i] == ar2[j]) {
                    ar2[j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (ar2[i] != -1) {
            ++c2;
        }
    }
    cout << endl << "Кількість різних елементів у масиві: " << c2 << endl << endl;
    
    // Завдання 3
    cout << "Завдання 3: " << endl;

    int p = 1, s1 = 0, ar3[10]{ 0, -8, 7, -5, 1, -9, 1, -2, 7, 9 }, iAr3[3];
    PrintArray(ar3);

    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            p *= ar3[i];
        }
    }
    int cordon1 = -1, cordon2 = -1;
    for (int i = 0; i < 10; ++i) {
        if (ar3[i] == 0) {
            if (cordon1 != -1) { 
                cordon2 = i; 
            }
            else {
                cordon1 = i;
            }
        }
    }
    for (int i = cordon1; i < cordon2; ++i) {
        s1 += ar3[i];
    }
    for (int i = 0, j = 0; i < 10; ++i) {
        if (ar3[i] < 0) {
            iAr3[j] = i;
            ++j;
        }
    }
    for (int i = 0, element = 0; i < 3; ++i) {
        element = ar3[i];
        ar3[i] = ar3[iAr3[i]];
        ar3[iAr3[i]] = element;
    }

    cout << endl << "Добуток елементів масиву з парними номерами: " << p << endl << "Сума елементів масиву, розташованих між першим і останнім нульовим елементами: " << s1;
    PrintArray(ar3);

    // Завдання 4
    cout << endl << endl << "Завдання 4: " << endl;

    int s2 = 0, s3 = 0, ar4[10]{ -3, 1, 9, 9, -2, 5, -12, 5, 6, 7 };
    PrintArray(ar4);

    for (int i = 0; i < 10; ++i) {
        if (i % 2 != 0) {
            s2 += ar4[i];
        }
    }
    cordon1 = -1; cordon2 = -1;
    for (int i = 0; i < 10; ++i) {
        if (ar4[i] < 0) {
            if (cordon1 != -1) {
               cordon1 = i;
            }
            else {
                cordon2 = i;
            }
        }
    }
    for (int i = cordon1 + 1; i < cordon2; ++i) {
        s3 += ar4[i];
    }
    int c = 0;
    for (int i = 0; i < 10; ++i) {
		if (abs(ar4[i]) > 2) {
			ar4[c++] = ar4[i];
        }
    }
	while (c < 10) {
		ar4[c++] = 0;
    }

    cout << endl << "Сума елементів масиву з непарними номерами: " << s2 << endl << "Сума елементів масиву, між першим і останнім від’ємними елементами: " << s3;
    PrintArray(ar4);

    // Завдання 5
    cout << endl << endl << "Завдання 5: " << endl;

    int max, s4 = 0, ar5[10]{ -9, 5, 0, -6, 0, 2, -8, 1, -5, 13 };
    PrintArray(ar5);

    max = ar5[0];
    for (int i = 0; i < 10; ++i) {
        if (abs(ar5[i]) > max) {
            max = abs(ar5[i]);
        }
    }
    cordon1 = -1, cordon2 = -1;
    for (int i = 0; i < 10; ++i) {
        if (cordon1 != -1 && cordon2 != -1) {
            break;
        }

        if (ar5[i] >= 0) {
            if (cordon1 != -1) {
                cordon2 = i;
            }
            else {
                cordon1 = i;
            }
        }
    }
    for (int i = cordon1 + 1; i < cordon2; ++i) {
        s4 += ar5[i];
    }
    c = 0;
    for (int i = 0; i < 10; ++i) {
		if (ar5[i] != 0) {
			ar5[c++] = ar5[i];
        }
    }
	while (c < 10) {
		ar5[c++] = 0;
    }

    cout << endl << "Максимальний елемент масиву за модулем: " << max << "Сума елементів масиву, між першим і другим додатними елементами: " << s4;
    PrintArray(ar5);

    // Завдання 6
    cout << endl << endl << "Завдання 6: " << endl;

    int c6 = 0, s5 = 0, ar6[10]{ 5, 2, 0, -9, 2, 8, 0, 11, 6, 0 };

    for (int i = 0; i < 10; ++i) {
        if (ar6[i] == 0) {
            ++c6;
        }
    }
    int pos;
    for (int i = 0, min = ar6[i]; i < 10; ++i) {
        if (ar6[i] < min) {
            min = ar6[i];
            pos = i;
        }
    }
    for (int i = pos + 1; i < 10; ++i) {
        s5 += ar6[i];
    }

    for (int i = 0; i < 9; ++i) {
        int min = i;

        for (int j = i + 1; j < 10; ++j) {
            if (ar6[j] < ar6[min]) {
                min = j;
            }
        }
        int k = ar6[i];
        ar6[i] = ar6[min];
        ar6[min] = k;
    }

    cout << "Кількість елементів масиву, що = 0: " << c6 << "Сума елементів масиву, що знаходятся після мінімального елемента: " << s5;
    PrintArray(ar6);


    return 0; 
}