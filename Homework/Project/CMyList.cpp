#include "CMyList.h"
#include <iostream>
using namespace std;

CMyList::CMyList() {
	headNode = nullptr;
	tailNode = nullptr;
	m_nLength = 0;
}

void CMyList::ShowMenu()
{
	cout << "--------------------" << endl;
	cout << "CMyList 메뉴" << endl;
	cout << "1 삽입" << endl;
	cout << "2 출력" << endl;
	cout << "0 종료" << endl;
	cout << "--------------------" << endl;
	cout << "메뉴를 고르세요(숫자 입력) : ";
}

void CMyList::Insert()
{
	int num;
	cout << "삽입할 데이터를 입력해주세요 : ";
	cin >> num;
	DNode* node = new DNode();
	node->data = num;
	if (headNode == nullptr) {
		headNode = node;
		tailNode = node;
	}
	else {
		tailNode->link = node;
		tailNode = node;
	}
	Print();
}


void CMyList::Print()
{
	DNode* temp = headNode;
	int count = 0;
	cout << "[Head] ";
	while (temp != nullptr) {
		cout << temp->data;
		if (temp->link != nullptr) cout << " - ";
		count++;
		temp = temp->link;
	}
	cout << " [Tail]\n";
	cout << "데이터 개수 : " << count << "개\n\n";
}
