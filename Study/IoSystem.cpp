#include <iostream>
#include <string>
int main() {
	std::string job, name, age;

	std::cout << "나이를 입력하세요 : ";
	std::cin >> age;
	std::cout << "직업을 입력하세요 : ";
	std::cin >> job;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;

	std::cout << "당신의 이름은 " + name + "이고, 나이는 " + age + "살이며, 직업은 " + job + "입니다.";
	return 0;
}
