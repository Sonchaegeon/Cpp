#include <iostream>
using namespace std;

class CMyDataArr
{
private:
	int* m_pnArr;
	int m_count;
public:
	CMyDataArr(int arrLen);
	void PrintData();
	void Insert(int value);
};


CMyDataArr::CMyDataArr(int arrLen) : m_pnArr(nullptr), m_count(0)
{
	m_pnArr = new int[arrLen];
}

void CMyDataArr::PrintData()
{
	cout << "전체 데이터 : ";
	for (int i = 0; i < m_count; i++) {
		cout << m_pnArr[i] << " ";
	}
	cout << "[ " << m_count << " / " << "10개 ]";
}

void CMyDataArr::Insert(int value)
{
	m_pnArr[m_count++] = value;
}

int main() {
	CMyDataArr data(10);

	data.Insert(10);
	data.Insert(24);
	data.Insert(123);
	data.Insert(234);
	data.Insert(3);
	data.Insert(4);

	data.PrintData();
}
