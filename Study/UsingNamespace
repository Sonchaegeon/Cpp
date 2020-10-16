#include <iostream>
//std namespace를 using 예약어로 선언한다.
using namespace std;

namespace TEST{
	int g_nData = 100;
	void TestFunc(){
		//cout, endl에 대해서 범위를 지정하지 않아도 된다. (using 선언했기 때문)
		cout << "TEST:: TestFunc()" << endl; 
	}
} 

//TEST namespace를 using 예약어로 선언한다. 
using namespace TEST;
int main(){
	//TestFunc()나 g_nData에 대해서 범위를 지정하지 않아도 된다. (using 선언했기 때문)
	TestFunc();
	cout << g_nData << endl;
	return 0; 
}
