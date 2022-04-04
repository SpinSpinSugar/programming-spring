#include <iostream>
#include "Fraction.h"

int main(int argc, char* argv[]) {
	Fraction fr1(3, 1);
	Fraction fr3(-6, -1);
	Fraction fr2(5, -2);
	std::cout << fr1 * fr2 << std::endl;
	std::cout << fr1 / fr2 << std::endl;
	std::cout << 1 / (3 * fr1 + 4 * fr2) << std::endl;
	std::cout << fr1.abs() << std::endl; //������ �����
	std::cout << fr1.reverse() << std::endl; // 1 / fr1

	//My test
	//std::cout << (fr1 < fr2)  << std::endl;
	std::cout << (fr1 - fr1) << std::endl;
	//std::cout << 5 - fr2 << std::endl;
	//std::cout << fr2 / fr2 << std::endl;
	//std::cout << fr2 - 5 << std::endl;
	//std::cout << 5 - fr2<< std::endl;
	//std::cout << fr2 / fr2 << std::endl;
	return EXIT_SUCCESS;
}