#include <iostream>
using namespace std;

void sub(void) {
	int i = 0;
	static int s = 0;

	i++;
	s++;
	cout << "i : " << i << ", s : " << s << endl;
}
int main() {
	sub();
	sub();
	sub();
	return 0;
}
//strien : string length 문자열 길이
//strcmp : string compare 문자열 비교