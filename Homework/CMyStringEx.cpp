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


int CMyStringEx::SetString(const char* pszParam)
{
    if (strcmp("장애인", pszParam) == 0) {
        CMyString::SetString("좋은 사람");
    }
    else {
        CMyString::SetString(pszParam);
    }

    return 0;
}
