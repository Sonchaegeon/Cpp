#include <iostream>
#include "CMyListEx.h"
using namespace	std;
int	main()
{
	CMyListEx* myListex = new CMyListEx;
	int	num;
	while (1)
	{
		myListex->ShowMenu();
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "0,	1, 2, 3, 4, 5, 6 중 숫자를 입력하세요~! :	";
			continue;
		}
		switch (num)
		{
		case 1: myListex->InsertFront();
			break;
		case 2: myListex->InsertBack();
			break;
			
		case 3: myListex->DeleteFront();
			break;
		case 4: myListex->DeleteBack();
			break;
		case 5: myListex->Print();
			break;
		case 6: myListex->PrintReverse();
			break;
		case 0: cout << "	종료합니다!\n";
			delete	myListex;
			return	0;
		default:
			cout << "0, 1, 2, 3, 4, 5, 6 중 숫자를 입력하세요~! : ";
			continue;
		}
	}
	return	0;
}
