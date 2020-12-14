#pragma once
#include "CMyList.h"
class CMyListEx :
    public CMyList
{
public:
    int InsertFront();
    void Print();
private:
    DNode* headNode;
    DNode* tailNode;
    int m_nLength;
public:
    void InsertBack();
    void DeleteFront();
    void DeleteBack();
    void PrintReverse();
};

