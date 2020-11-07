#pragma once
#include "CMyString.h"
class CMyStringEx : public CMyString
{
public:
    CMyStringEx() {}
    ~CMyStringEx() {}
    CMyStringEx(const char* pszParam);

    int Find(const char* pszParam);
    int SetString(const char* pszParam);
};
