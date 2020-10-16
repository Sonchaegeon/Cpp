#include <iostream>
using namespace std;

//제작자의 코드
class USERDATA{
	public:
		//멤버 변수 선언
		int nAge;
		char szName[32];
		
		//멤버 함수 선언 및 정의
		void Print(){
			//nAge와 szName은 Print()함수의 지역변수가 아니다!
			cout << nAge << " " << szName << endl; 
		} 
}; 

//사용자의 코드
int main(){
	USERDATA user = { 20, "채건"};
	user.Print();
	return 0;
} 
