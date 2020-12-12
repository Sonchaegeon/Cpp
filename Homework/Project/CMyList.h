#pragma once
class CMyList
{
public:
	typedef struct DNode {
		int data;
		DNode* link;
	} DNode;
	CMyList();
	void ShowMenu();
	void Insert();

private:
	DNode* headNode;
	DNode* tailNode;
	int m_nLength;
public:
	void Print();
};

