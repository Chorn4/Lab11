#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int nomer;

    cout << "������ ����� ������, ��� ������ ��������(1 ��� 2): ";
    cin >> nomer;

    switch (nomer) {
    case 1:
        cout << "����������� �����, �� ��� ����� �� 133 ����� ������ 125, � ��� ����� �� 134 ����� ������ 111: " << endl;

        for (int i = 1000; i < 10000; ++i) {
            if (i % 133 == 125 || i % 134 == 111) {
                cout << i << '\t';
            }
        }
        
        break;

    case 2:
        int years = 18, n, l, k;

        cout << "������ ������� ������ �������: ";
        cin >> n;
        cout << "������ �����, �� ��� ���� ������������ ������� ������ ����� ��: ";
        cin >> l;
        cout << "������ ������� ���������� ������� ������: ";
        cin >> k;

        for (int i = n; i < k; i += l) {
            ++years;
        }

        cout << "���� ������� �������� ����������� " << years << ", ���� ���������� �� ������� �����������" << endl;

        break;

    default:
        cout << "�������, ������ �� ��� ������� �������, ��������� ���� (1, 2)" << endl;
        break;

    }


    return 0;
}