#include "header.hpp"
vect3D::vect3D() {
	x = 2;
	y = 3;
	z = 1;
}
vect3D::~vect3D() {

}
vect3D::vect3D(vect3D&& obj) {
	this->x = obj.x;
	this->y = obj.y;
	this->z = obj.z;
	obj.x = 0;
	obj.y = 0;
	obj.z = 0;
	
}
vect3D::vect3D(vect3D& copy) {
	this->x = copy.x;
	this->y = copy.y;
	this->z = copy.z;
}
void vect3D::set_xyz(int a, int b, int c) {
	x = a;
	y = b;
	z = c;

}
vect3D vect3D::operator + (vect3D const& obj){
	vect3D rez;
	rez.x = x + obj.x;
	rez.y = y + obj.y;
	rez.z = z + obj.z;
	return rez;
}
vect3D vect3D::operator - (vect3D const& obj) {
	vect3D rez;
	rez.x = x - obj.x;
	rez.y = y - obj.y;
	rez.z = z - obj.z;
	return rez;
}
vect3D vect3D::operator = (vect3D const& obj) {
	vect3D rez;
	rez.x = obj.x;
	rez.y = obj.y;
	rez.z = obj.z;
	return rez;
}
vect3D vect3D::operator * (int a) {
	vect3D rez;
	rez.x = x * a;
	rez.y = y * a;
	rez.z = z * a;
	return rez;
}
vect3D vect3D::operator * (vect3D const& obj) {
	vect3D rez;
	rez.x = x * obj.x;
	rez.y = y * obj.x;
	rez.z = z * obj.x;
	return rez;
}
vect3D vect3D::operator / (int a) {
	vect3D rez;
	rez.x = x / a;
	rez.y = y / a;
	rez.z = z / a;
	return rez;
}
vect3D vect3D::operator += (int a) {
	
	x += a;
	y += a;
	z += a;
	return *this;
}
vect3D vect3D::operator -= (int a) {
	x -= a;
	y -= a;
	z -= a;
	return *this;
}
vect3D vect3D::operator *= (int a) {
	x *= a;
	y *= a;
	z *= a;
	return *this;
}
vect3D vect3D::operator /= (int a) {
	x /= a;
	y /= a;
	z /= a;
	return *this;
}

std::istream& operator>>(std::istream& cin, vect3D& c) {
	std::cout << "Unesite x" << std::endl;
	cin >> c.x;
	std::cout << "Unesite y" << std::endl;
	cin >> c.y;
	std::cout << "Unesite z" << std::endl;
	cin >> c.z;
	return cin;
}
std::ostream& operator<<(std::ostream&, vect3D& c) {
	std::cout << c.x <<": x" << std::endl;
	std::cout << c.y <<": y" << std::endl;
	std::cout << c.z <<": z" << std::endl;
	return std::cout;
}
