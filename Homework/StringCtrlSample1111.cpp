#include <iostream>
#include "CMyString.h"
using namespace	std;

void TestFunc(const CMyString& param) {
	cout << param.GetString() << endl;
}

int	main()
{
	CMyString strData;
	cout << strData.GetString() << endl;
	strData.Release();
	cout << strData.GetString() << endl;

	CMyString strData2;
	strData2.SetString("");
	cout << strData2.GetString() << endl;
	strData2.Release();

	CMyString strData3;
	strData3.SetString("Hello");
	TestFunc(strData3);
	cout << strData3.GetString() << endl;
	strData3.Release();
}
