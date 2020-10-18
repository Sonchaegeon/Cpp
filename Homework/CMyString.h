#pragma once
const class CMyString
{
public:
	CMyString();
	~CMyString();
	CMyString& operator=(const CMyString& rhs);

	//복사 생성자
	CMyString(const CMyString& rhs);

	//변환 생성자
	explicit CMyString(const char* pszParam);

	//이동 생성자
	CMyString(CMyString&& rhs);

	operator char* () const {
		return m_pszData;
	}
private:
	// 문자열을 저장하기 위해 동적할당한 메모리를 가리키는 포인터
	char* m_pszData;
	// 저장된 문자열의 길이
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	const void Release();
};

