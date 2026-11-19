#include <iostream>

int main()
{
	int a;
	int b;
	std::cout << "Enter two number - " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "Numbers - " << a << " " << b << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a <= b) << std::endl;

}