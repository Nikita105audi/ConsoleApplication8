#include <iostream>

int main()
{
	char number;
	std::cout << "Enter letter - " << std::endl;
	std::cin >> number;
	char next = number + 1;
	std::cout << next << std::endl;
	std::cout << "Letter - " << number << std::endl;
	std::cout << "Next - " << next << std::endl;


}