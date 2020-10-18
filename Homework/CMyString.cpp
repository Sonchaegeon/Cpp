#include "CMyString.h"
#include <iostream>
#include <string.h>

using namespace std;

CMyString::CMyString()
	:m_pszData(nullptr)
	, m_nLength(0)
{
}

CMyString::~CMyString()
{
	delete m_pszData;
}

CMyString& CMyString::operator=(const CMyString& rhs)
{
	SetString(rhs.m_pszData);
	return *this;
}

CMyString::CMyString(const CMyString& rhs)
{
	SetString(rhs.m_pszData);
}

CMyString::CMyString(const char* pszParam)
	:m_pszData(nullptr)
	, m_nLength(0)
{
	SetString(pszParam);
}

CMyString::CMyString(CMyString&& rhs)
	:m_pszData(nullptr)
	, m_nLength(0)
{
	cout << "CMyString �̵������� ȣ��" << endl;

	//���� ���縦 �����ص� �������. ������ ������ �� �Ҹ�Ǳ� �����̴�.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	//���� �ӽ� ��ü�� ������� �ʱ�ȭ �Ѵ�. ����� �����ϸ� �ȵȴ�.
	rhs.m_pszData = nullptr;
	rhs.m_nLength = 0;
}

int CMyString::SetString(const char* pszParam)
{
	m_nLength = strlen(pszParam);
	if (pszParam == NULL || m_nLength == 0) return 0;

	m_pszData = new char[m_nLength + 1];
	strcpy_s(m_pszData, m_nLength + 1, pszParam);
	return 0;
}


const char* CMyString::GetString() const
{
	if (m_pszData == NULL) return "";
	return m_pszData;
}


const void CMyString::Release()
{
	delete m_pszData;
}