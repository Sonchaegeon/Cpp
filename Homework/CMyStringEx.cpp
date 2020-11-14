#include "CMyStringEx.h"
#include <string.h>

CMyStringEx::CMyStringEx(const char* pszParam)
{
    SetString(pszParam);
}

int CMyStringEx::Find(const char* pszParam)
{
    const char* ptr = strstr(this->GetString(), pszParam);
    if (ptr != nullptr) {
        return ptr - this->GetString();
    }
    return -1;
}


void CMyStringEx::OnSetString(char* pszData, int nLength)
{
    if (strcmp(pszData, "멍멍이아들") == 0) {
        strcpy_s(pszData, nLength + 1, "*착한아들*");
    }
}
