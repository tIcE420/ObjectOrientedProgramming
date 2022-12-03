#include "header.hpp"
using namespace OOP;
int main() {
	vect3D a;
	vect3D b;
	a.set_xyz(1, 2, 3);
	b.set_xyz(3, 2, 1);
	vect3D c = a + b;
	std::cout << c<<std::endl;
	vect3D d = a - b;
	std::cout << d << std::endl;
	b = a;
	std::cout << b << std::endl;
	a = a * 2;
	std::cout << a << std::endl;
	vect3D s = a * b;
	std::cout << s << std::endl;
	s = s / 2;
	std::cout << s << std::endl;
	s += 2;
	std::cout << s << std::endl;
	s -= 2;
	std::cout << s << std::endl;
	s *= 2;
	std::cout << s << std::endl;
	s /= 2;
	std::cout << s << std::endl;
	vect3D g;
	std::cin >>g;
	std::cout << g;

}