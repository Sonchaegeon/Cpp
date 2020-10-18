#include <iostream>
using namespace std;

class CTestData {
public:
	CTestData() :m_nData(0) {
		cout << "CTestData()" << endl;
	}
	CTestData(int num) : m_nData(num) {
		cout << "CTestData(int)" << endl;
	}
	CTestData(int num, const char* pszName) : m_nData(num) {
		m_pszName = (char*)pszName;
		cout << "CTestData(int, char*)" << m_pszName << endl;
	}

	// 이동 생성자
	CTestData(CTestData&& rhs) :m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) {
		cout << "CTestData(CTestData &&rhs)" << m_pszName << endl;
	}
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) {
		cout << "CTestData(const CTestData& rhs" << m_pszName << endl;
	}

	CTestData& operator= (const CTestData& rhs) {
		m_nData = rhs.m_nData;
		m_pszName = rhs.m_pszName;
		cout << " operator=(const CTestDat& rhs)" << m_pszName << endl;
		return *this;
	}
	~CTestData() { cout << "~CTestData()" << m_pszName << endl; }

	void SetData(int nParam) { m_nData = nParam; }
	int GetData() { return m_nData; }
	
private:
	int m_nData = 0;
	// 변수 이름을 저장하기 위한 멤버
	char* m_pszName = nullptr;
};

CTestData TestFunc(int num) {
	cout << "--------------------- TestFunc() Start" << endl;
	CTestData t(num, "T");
	cout << "--------------------- TestFunc() End" << endl;
	return t;
}

int main() {
	cout << "--------------------- main() Begin" << endl;
	CTestData c;
	cout << "--------------------- TestFunc() 호출 전" << endl;
	c = TestFunc(50);
	cout << "--------------------- TestFunc() 호출 후" << endl;
	cout << "--------------------- main() End" << endl;
	return 0;
}
