#pragma once
class CMyList
{
public:
	typedef struct DNode {
		int data;
		DNode* prev;
		DNode* link;
	} DNode;
	CMyList();

	virtual void ShowMenu();
	void Insert();
private:
	DNode* headNode;
	DNode* tailNode;
	int m_nLength;
public:
	void Print();
	DNode* GetHeadNode() const;
	DNode* GetTailNode() const;
	void SetHeadNode(DNode* link) { headNode = link; }
	void SetTailNode(DNode* link) { tailNode = link; }
};

