﻿#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char bukva;

	cout << "Введіть першу літеру назви країни (Можливі літери: У, Ф, К, М, Б, І, А): ";
	cin >> bukva;
	cout << endl << "Використовуючи if: ";
	if (bukva == 'У') {
		cout << "Країна: Україна      Континент: Європа      Площа: 603 700 км2" << endl;
	}
	else if (bukva == 'Ф') {
        cout << "Країна: Франція      Континент: Європа      Площа: 643 801 км2" << endl;
	}
	else if (bukva == 'К') {
		cout << "Країна: Китай      Континент: Азія      Площа: 9 597 000 км2" << endl;
	}
	else if (bukva == 'М') {
		cout << "Країна: Мексика      Континент: Північна Америка      Площа: 1 964 000 км2" << endl;
	}
	else if (bukva == 'Б') {
		cout << "Країна: Бразилія      Континент: Південна Америка      Площа: 8 516 000 км2" << endl;
	}
	else if (bukva == 'І') {
		cout << "Країна: Індонезія     Континент: Азія      Площа: 1 905 000 км2" << endl;
	}
	else if (bukva == 'А') {
		cout << "Країна: Австралія      Континент: Океанія      Площа: 7 688 000 км2" << endl;
	}
	cout << endl << "Використовуючи switch: ";
	switch ((int) bukva) {
	case (int)'У':
		cout << "Країна: Україна      Континент: Європа      Площа: 603 700 км2";
		break;
	case (int)'Ф':
		cout << "Країна: Франція      Континент: Європа      Площа: 643 801 км2";
		break;
	case (int)'К':
		cout << "Країна: Китай      Континент: Азія      Площа: 9 597 000 км2";
		break;
	case (int)'М':
		cout << "Країна: Мексика      Континент: Північна Америка      Площа: 1 964 000 км2";
		break;
	case (int)'Б':
		cout << "Країна: Бразилія      Континент: Південна Америка      Площа: 8 516 000 км2";
		break;
	case (int)'І':
		cout << "Країна: Індонезія     Континент: Азія      Площа: 1 905 000 км2";
		break;
	case (int)'А':
		cout << "Країна: Австралія      Континент: Океанія      Площа: 7 688 000 км2";
		break;
	}

	return 0;
}