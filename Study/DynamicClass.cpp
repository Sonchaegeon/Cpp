#include <iostream>
using namespace std;

class CTest{
	int m_nData;
	
	public:
		CTest() : m_nData(0){ //default 생성자 
		 	cout << "CTest::CTest()" << endl; //생성자 호출 확인 
		}
		CTest(int nParam) : m_nData(nParam){
			cout << "CTest::CTest(int nParam)" << endl; // 생성자 호출 확인 
		}
		~CTest() { //생성자{
			// 멤버변수의 값을 함께 출력해본다.
			cout << "CTest::~Ctest() " << m_nData << endl; //소멸자 호출확 
		}
};
 
int main(){
	cout << "Begin " << endl;
	CTest* pData = new CTest;
	CTest a;
	
	cout << "Before b" << endl;
	delete pData;
	
	pData = new CTest(20);
	CTest b(10);
	delete pData;
	cout << "End " << endl;
	return 0;
}
