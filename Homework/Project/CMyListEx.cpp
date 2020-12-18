#include "CMyListEx.h"
#include <iostream>

using namespace std;


int CMyListEx::InsertFront()
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
		node->link = headNode;
		headNode->prev = node;
		headNode = node;
	}
	Print();
	return 0;
}	

void CMyListEx::InsertBack()
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
		node->prev = tailNode;
		tailNode = node;
	}
	Print();
}

void CMyListEx::DeleteFront()
{
	DNode* temp = headNode;
	if (temp == nullptr) {
		cout << "삭제할 데이터가 없습니다!" << endl;
		return;
	}

	if (headNode == tailNode) {
		headNode = nullptr;
		tailNode = nullptr;
		delete temp;
		Print();
		return;
	}

	headNode = temp->link;
	delete temp;
	Print();
}

void CMyListEx::DeleteBack()
{
	DNode* temp = tailNode;
	if (temp == nullptr) {
		cout << "삭제할 데이터가 없습니다!" << endl;
		return;
	}

	if (headNode == tailNode) {
		headNode = nullptr;
		tailNode = nullptr;
		delete temp;
		Print();
		return;
	}

	if (temp->prev != nullptr) {
		tailNode = temp->prev;
		tailNode->link = nullptr;
	}
	else {
		headNode = nullptr;
	}
	delete temp;
	Print();
}

void CMyListEx::Print()
{
	DNode* temp = headNode;
	m_nLength = 0;

	if (temp == nullptr) {
		cout << "출력할 데이터가 없습니다." << endl;
		return;
	}

	CMyListEx::printCount++;
	cout << "[Head] ";
	while (temp != nullptr) {
		cout << temp->data;
		if (temp->link != nullptr) cout << " - ";
		m_nLength++;
		temp = temp->link;
	}
	cout << " [Tail]\n";
	cout << "데이터 개수 : " << m_nLength << "개\n\n";
	cout << "출력 개수 : " << CMyListEx::printCount << endl;
}

void CMyListEx::PrintReverse()
{
	DNode* temp = tailNode;
	m_nLength = 0;

	if (temp == nullptr) {
		cout << "출력할 데이터가 없습니다." << endl;
		return;
	}

	cout << "[Tail] ";
	while (temp != nullptr) {
		cout << temp->data;
		if (temp->prev != nullptr) cout << " - ";
		m_nLength++;
		temp = temp->prev;
	}
	cout << " [head]\n";
	cout << "데이터 개수 : " << m_nLength << "개\n\n";
}

void CMyListEx::operator--()
{
	cout << "operator--" << endl;
	DeleteFront();
}
