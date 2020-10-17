#include <iostream>
using namespace std;

class CRefTest{
	private:
		//참조형 멤버는 객체가 생성될 때 반드시 초기화 해야 한다. 
		int& m_nData;
	public:
		//참조형 멤버는 생성자 초기화 목록을 사용해 초기화 한다.
		CRefTest(int &rParam) : m_nData(rParam){
			cout << "CRefTest::CRefTest(int &rParam)" << m_nData << endl; 
		}
		~CRefTest(){
			cout << "CRefTest::~CRefTest()" << m_nData << endl;
		}
		int GetData() {
			return m_nData;
		}
};

int main(){
	cout << "Begin" << endl;
	int a(10);
	
	CRefTest t(a);
	
	cout << "GetData(): " << t.GetData() << endl;
	
	// 참조 원본인 a의 값을 수정
	a  = 20;
	cout << "GetData(): " << t.GetData() << endl;
	
	cout << "End " << endl;
	return 0; 
}
