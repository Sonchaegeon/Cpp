#include <iostream>
#include "CMyString.h"
#include "CMyStringEx.h"
using namespace	std;

int main() {
	CMyStringEx strLeft("학번:1111"), strRight(" 이름:손채건");

	cout << strLeft << strRight << endl;

	return 0;
}
