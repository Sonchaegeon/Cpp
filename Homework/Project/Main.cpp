#include <iostream>
#include "CMyList.h"
using namespace std;
int main() {
	CMyList* myList = new CMyList;
	int num;
	while (1) {
		myList->ShowMenu();
		cin >> num;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "0, 1, 2 중 숫자를 입력하세요~!\n";
			continue;
		}

		switch (num) {
		case 1:
			myList->Insert();
			break;
		case 2:
			myList->Print();
			break;
		case 0:
			cout << "종료합니다!\n";
			delete myList;
			return 0;
		default:
			cout << "0, 1, 2 중 숫자를 입력하세요~!\n";
			continue;
		}
	}

	return 0;
}
