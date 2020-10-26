#include <iostream>
#pragma warning(disable:4996)

using namespace std;
int main() {
	int n;
	cout << "숫자입력: ";
	cin >> n;
	cout << endl << n << "단 출력" << endl;
	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
}
