#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int nomer;

    cout << "Введіть номер задачі, яку хочете виконати(1 або 2): ";
    cin >> nomer;

    switch (nomer) {
    case 1:
        cout << "Чотиризначні числа, які при діленні на 133 дають остачу 125, а при діленні на 134 дають остачу 111: " << endl;

        for (int i = 1000; i < 10000; ++i) {
            if (i % 133 == 125 || i % 134 == 111) {
                cout << i << '\t';
            }
        }
        
        break;

    case 2:
        int years = 18, n, l, k;

        cout << "Введіть кількість скринь Чахлика: ";
        cin >> n;
        cout << "Введіть число, на яке буде збільшуватися кількість скринь кожен рік: ";
        cin >> l;
        cout << "Введіть кількість наповнених золотом скринь: ";
        cin >> k;

        for (int i = n; i < k; i += l) {
            ++years;
        }

        cout << "Коли Василині Премудрій виповниться " << years << ", вона одружитися на Чахлику невмирущому" << endl;

        break;

    default:
        cout << "Помилка, задача під цим номером відсутня, спробуйте іншу (1, 2)" << endl;
        break;

    }


    return 0;
}