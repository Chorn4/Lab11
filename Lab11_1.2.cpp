#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, r;

	cout << "������ �������� ����� X: ";
	cin >> x;
	cout << "\n������ �������� ����� Y: ";
	cin >> y;
	cout << "\n������ �������� ������ r: ";
	cin >> r;

	if ((y >= 0 && sqrt(pow(x, 2) + pow(y, 2)) <= r) || ((y < x * tan(3.9270)) && (abs(y) < r))) {
		cout << "\n������� ����� ����������� � ������������ ������ ������";
	} else {
	cout << "\n������� ����� �� ����������� � ������������ ������ ������, ��������� ���� ��������";
	}

	return 0;
}