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
	cout << "CMyListEx 메뉴" << endl;
	cout << "1 삽입 Head" << endl;
	cout << "2 삽입 Tail" << endl;
	cout << "3 삭제 Head" << endl;
	cout << "4 삭제 Tail" << endl;
	cout << "5 출력 Head -> Tail" << endl;
	cout << "6 출력 Tail -> Head" << endl;
	cout << "7 CMyListEx--" << endl;
	cout << "0 종료" << endl;
	cout << "--------------------\n" << endl;
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
		node->prev = nullptr;
	}
	else {
		node->prev = tailNode;
		tailNode = node;
	}
	Print();
}


void CMyList::Print()
{
	DNode* temp = headNode;

	cout << "[Head] ";
	while (temp != nullptr) {
		cout << temp->data;
		if (temp->link != nullptr) cout << " - ";
		m_nLength++;
		temp = temp->link;
	}
	cout << " [Tail]\n";
	cout << "데이터 개수 : " << m_nLength << "개\n\n";
}


CMyList::DNode* CMyList::GetHeadNode() const
{
	return headNode;
}

CMyList::DNode* CMyList::GetTailNode() const
{
	return tailNode;
}
