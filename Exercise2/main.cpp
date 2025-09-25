#include "math.h"
#include <iostream>

int main() {

	int a, b;
	std::cout << "Enter First number" << std::endl;
	std::cin >> a;
	std::cout << "Enter Second number" << std::endl;
	std::cin >> b;
	std::cout << add(a, b);
	std::cout << multiply(a, b);
}