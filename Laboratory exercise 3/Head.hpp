#include<iostream>
#include<vector>
#include <random>
#include<math.h>

class dot {
	double x, y, z;
public:
	void set_values(double x = 0.00, double y = 0.00, double z = 0.00);
	void get_random_val(double min, double max);
	double get_x() { return x; }
	double get_y() { return y; }
	double get_z() { return z; }
	double calc_dist_2D(double x, double y, double x1, double y2);
	double calc_dist_3D(double x, double y, double z, double x1, double y1, double z1);
};

class bullet {
	dot position;

public:
	dot get_position() { return position; }
	double get_bullet_x() { return position.get_x(); }
	double get_bullet_y() { return position.get_y(); }
	double get_bullet_z() { return position.get_z(); }
	void set_position(double x, double y, double z);
};

class weapon {
	dot position;
	bullet round;
	int magazine_capacity;
	int num_of_bullets;
public:
	void set_bullet_position();
	void set_position(double x, double y, double z);
	void set_number_of_bullets() { num_of_bullets = magazine_capacity; }
	int get_current_ammo() { return num_of_bullets; }
	void set_magazine_capacity(int magazine_cap);
	dot shoot_bullet_set(bool trigger_pull);
	void reload();
	dot get_position() { return position; }
	dot get_bullet_position() { return round.get_position(); }


};

class target {
	dot upper_right;
	dot lower_left;
public:
	void set_target_ur(int x, int y, int z);
	void set_target_ll(int x, int y, int z);
	void set_random_target_ur();
	void set_random_target_ll();
	double get_target_ur_x() { return upper_right.get_x(); }
	double get_target_ur_y() { return upper_right.get_y(); }
	double get_target_ur_z() { return upper_right.get_z(); }
	double get_target_ll_x() { return lower_left.get_x(); }
	double get_target_ll_y() { return lower_left.get_y(); }
	double get_target_ll_z() { return lower_left.get_z(); }
	bool state(dot position);

};



dot rotate(dot pos);

std::vector<target> generate_targets(size_t n);