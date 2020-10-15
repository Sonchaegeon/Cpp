#include <iostream>

int main(){
	int nData = 10;
	
	//nData 인스턴스에 대한 참조자 선언
	int& ref = nData;

	//참조자의 값을 변경하면 원본도 변경된다!
	ref = 20;

	std::cout << nData << std::endl;

	//포인터를 쓰는 것과 비슷하다.
	int* pnData = &nData;
	*pnData = 30;
	std::cout << nData << std::endl;

	return 0;
}
