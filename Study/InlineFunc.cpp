#include <iostream>
#define ADD(a, b) ((a) + (b))

// 인라인 함수를 알고 있어야 하지만 최신 컴파일러는 함수를 적절하게 인라인화 한다.
int Add(int a, int b) {
	return a + b;
}

inline int AddNew(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	
	std::cout << "Add() : " << ADD(a, b) << std::endl;
	std::cout << "Add() : " << Add(a, b) << std::endl;
	std::cout << "AddNew() : " << AddNew(a, b) << std::endl;

	return 0;
}
