#pragma once
#include "CMyString.h"
class CMyStringEx :
    public CMyString
{
public:
    int Find(const char* pszParam);
    int SetString(const char* pszParam);
};
