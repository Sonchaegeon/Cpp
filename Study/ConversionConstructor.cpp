#include <iostream>
using namespace std;

class CTestData {
public:
	// 매개변수가 하나분인 생성자는 형변환이 가능하다.
	CTestData(int nParam) : m_nData(nParam) {
		cout << " CTestData(int) " << endl;
	}
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData) {
		cout << " CTestData(const CTestData &)" << endl;
	}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData;
};

// 매개변수가 클래스 형식이면 변환 생성이 가능하다.
void TestFunc(CTestData param) {
	cout << " TestFunc(): " << param.GetData() << endl;
}

int main() {
	// int 자료형에서 CTestData 형식을 변환될 수 있다.
	TestFunc(5);

	return 0;
}
