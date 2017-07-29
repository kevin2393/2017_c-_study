#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "년도 입력 : ";
	cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		cout << year << "년은 윤년입니다" << endl;
	}
	else if (year % 100 == 0) {
		cout << year << "년은 평년입니다" << endl;
	}
	else {
		cout << year << "년은 윤년이 아닙니다" << endl;
	}
}