#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, r;

	cout << "¬вед≥ть значенн€ точки X: ";
	cin >> x;
	cout << "\n¬вед≥ть значенн€ точки Y: ";
	cin >> y;
	cout << "\n¬вед≥ть значенн€ рад≥усу r: ";
	cin >> r;

	if ((y >= 0 && sqrt(pow(x, 2) + pow(y, 2)) <= r) || ((y < x * tan(3.9270)) && (abs(y) < r))) {
		cout << "\n¬ведена точка знаходитьс€ в заштрихован≥й област≥ ф≥гури";
	} else {
	cout << "\n¬ведена точка не знаходитьс€ в заштрихован≥й област≥ ф≥гури, спробуйте ≥нше значенн€";
	}

	return 0;
}