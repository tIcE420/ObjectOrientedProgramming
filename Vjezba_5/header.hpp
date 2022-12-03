#include <iostream>
#include <vector>
namespace OOP {
	class vect3D {
		float x, y, z;
	public:
		vect3D operator + (vect3D const& obj);
		vect3D operator - (vect3D const& obj);
		vect3D operator = (vect3D const& obj);
		vect3D operator * (vect3D const& obj);
		vect3D operator * (float a);
		vect3D operator / (float a);
		vect3D operator += (float a);
		vect3D operator -= (float a);
		vect3D operator *= (float a);
		vect3D operator /= (float a);
		friend std::istream& operator>>(std::istream& cin, vect3D& c);
		friend std::ostream& operator<<(std::ostream&, vect3D& c);

		void set_xyz(float x, float y, float z);
		vect3D();
		vect3D(vect3D& copy);
		~vect3D();
		vect3D(vect3D&& obj);
		float get_x() { return x; }
		float get_y() { return y; }
		float get_z() { return z; }

	};
}