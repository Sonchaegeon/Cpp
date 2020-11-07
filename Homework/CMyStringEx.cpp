#include "CMyStringEx.h"
#include <string.h>

int CMyStringEx::Find(const char* pszParam)
{
    const char* ptr = strstr(this->GetString(), pszParam);
    if (ptr != nullptr) {
        return ptr - this->GetString();
    }
    return -1;
}
