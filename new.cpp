#include <iostream>
using namespace std;

int main() {
	int *pi;
	pi = new int[100];
	for (int i = 0; i < 100; i++) {
		*(pi + i) = 0;
	}
	delete[]pi;

	return 0;
}