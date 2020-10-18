#pragma once
const class CMyString
{
public:
	CMyString();
	~CMyString();
	CMyString& operator=(const CMyString& rhs);

	//���� ������
	CMyString(const CMyString& rhs);

	//��ȯ ������
	explicit CMyString(const char* pszParam);

	//�̵� ������
	CMyString(CMyString&& rhs);

	operator char* () const {
		return m_pszData;
	}
private:
	// ���ڿ��� �����ϱ� ���� �����Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;
	// ����� ���ڿ��� ����
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	const void Release();
};

