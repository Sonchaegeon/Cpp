#include <iostream>

//nParam 매개변수의 디폴트 값은 10이다.
int TestFunc(int nParam = 10) {
	return nParam;
}

int main() {
	//호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용
	std::cout << TestFunc() << std::endl;

	//호출자가 실인수를 확정했으므로 디폴트 값을 무시
	std::cout << TestFunc(30) << std::endl;
	return 0;
}
