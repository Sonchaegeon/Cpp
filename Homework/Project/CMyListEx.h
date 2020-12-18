#pragma once
#include "CMyList.h"
class CMyListEx : public CMyList
{
public:
    CMyListEx() {
        headNode = nullptr;
        tailNode = nullptr;
        m_nLength = 0;
    }
    CMyListEx(CMyList* list) {
        headNode = list->GetHeadNode();
        tailNode = list->GetTailNode();
        m_nLength = 0;
    }

    static int printCount;

    int InsertFront();
    void Print();
    void InsertBack();
    void DeleteFront();
    void DeleteBack();
    void PrintReverse();
    void operator--();
private:
    DNode* headNode;
    DNode* tailNode;
    int m_nLength;
};

