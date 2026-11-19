#include <iostream>

int main()
{
	int number;
	std::cout << "radiys - " << std::endl;
	std::cin >> number;
	const double PI = 3.14159;
	std::cout << "radiys = " << number << std::endl;
	std::cout << "Ploshad = " << number * number * PI << std::endl;
}