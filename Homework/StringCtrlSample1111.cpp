#include <iostream>
#include "CMyString.h"
#include "CMyStringEx.h"
using namespace	std;

int main() {
	CMyStringEx strTest;
	strTest.SetString("");
	cout << strTest << endl;

	int nIndex = strTest.Find("손채건");

	cout << "Index : " << nIndex << endl;

	return 0;
}
