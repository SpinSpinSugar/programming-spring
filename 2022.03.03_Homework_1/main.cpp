#include <iostream>
#include "Complex.h"

int main(int argc, char* argv[]) {
	Complex z1(3, 1);
	Complex z2(5, -2);
	std::cout << z1 * z2 << std::endl;
	std::cout << z1 / z2 << std::endl;
	std::cout << 3 * z1 + 4 * z2 << std::endl;
	std::cout << z1.abs() << std::endl; //модуль числа
	std::cout << z2.arg() << std::endl; //аргумент числа
	std::cout << z1.reverse() << std::endl; //обратное число
	z1.root(5, std::cout); //вывод в поток cout формулы корней пятой степени
	return EXIT_SUCCESS;
}