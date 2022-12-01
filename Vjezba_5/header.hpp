#include <iostream>
#include <vector>

class vect3D {
	int x, y, z;
public:
	vect3D operator + (vect3D const& obj);
	vect3D operator - (vect3D const& obj);
	vect3D operator = (vect3D const& obj);
	vect3D operator * (vect3D const& obj);
	vect3D operator * (int a);
	vect3D operator / (int a);
	vect3D operator += (int a);
	vect3D operator -= (int a);
	vect3D operator *= (int a);
	vect3D operator /= (int a);
	friend std::istream& operator>>(std::istream& cin, vect3D& c);
	friend std::ostream& operator<<(std::ostream&, vect3D& c);

	void set_xyz(int x,int y,int z);
	vect3D();
	vect3D(vect3D& copy);
	~vect3D();
	vect3D(vect3D&& obj);
	int get_x() { return x;}
	int get_y() { return y; }
	int get_z() { return z; }
};