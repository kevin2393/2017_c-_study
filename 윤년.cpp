#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "�⵵ �Է� : ";
	cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		cout << year << "���� �����Դϴ�" << endl;
	}
	else if (year % 100 == 0) {
		cout << year << "���� ����Դϴ�" << endl;
	}
	else {
		cout << year << "���� ������ �ƴմϴ�" << endl;
	}
}