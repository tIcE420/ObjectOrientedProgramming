#include"Head.hpp"

void dot::set_values(double x_cord, double y_cord, double z_cord) {
	x = x_cord;
	y = y_cord;
	z = z_cord;

}

double dot::calc_dist_2D(double x, double y,double x1, double y1) {

	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

double dot::calc_dist_3D(double x, double y,double z, double x1, double y1, double z1) {
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1) + (z - z1) * (z - z1));
}

void dot::get_random_val(double min, double max) {
	int range = max - min + 1;
	x = (rand() % range) + min;
	y = (rand() % range) + min;
	z = (rand() % range) + min;
	
}
void bullet::set_position(double x, double y, double z) {
	position.set_values(x,y,z);
	
	
}

void weapon::set_position(double x, double y,double z) {
	position.set_values(x, y, z);
	
}
void weapon::set_magazine_capacity(int magazine_cap) {
	magazine_capacity = magazine_cap;
}
dot weapon::shoot_bullet_set(bool trigger_pull) {
	if (trigger_pull == true) {
		if (num_of_bullets == 0 || round.get_bullet_x() == magazine_capacity) {
			std::cout << "Napuni metke"<<"\n";
			trigger_pull = 0;
			return round.get_position();
		}
		num_of_bullets = num_of_bullets - 1;
		round.set_position(round.get_bullet_x() + 1,position.get_y(), round.get_bullet_z());
		std::cout << "piju piju" << "\n";
		return round.get_position();
	}
		

	
}


void weapon::reload() {
	num_of_bullets = magazine_capacity;
}
void weapon::set_bullet_position() {
	round.set_position(position.get_x(),position.get_y(), position.get_z());
	
}
bool target::state(dot position) {
	if (position.get_z() >= lower_left.get_z() && position.get_z() <= upper_right.get_z()) {
		std::cout << "Svaka cast caca\n\n\n";
		return true;
	}
	else {
		std::cout << "git gud nerd"<<"\n"<<"I mesar je dobro zanimanje"<<"\n\n\n";
		return false;
	}
	
}

void target::set_target_ur(int x, int y, int z) {
	upper_right.set_values(x, y, z);
}
void target::set_target_ll(int x, int y, int z) {
	lower_left.set_values(x, y, z);
}
dot rotate(dot pos) {
	
	pos.set_values(-pos.get_x(), -pos.get_y(),0);
	
	
	return pos;
}
void target::set_random_target_ur() {
	upper_right.get_random_val(20,40);
}
void target::set_random_target_ll() {
	lower_left.get_random_val(0,20);
}
std::vector<target> generate_targets(size_t n) {
	std::vector<target> mete;
	mete.reserve(n);
	for (int i = 0; i < n; i++) {
		target meta;
		meta.set_random_target_ll();
		meta.set_random_target_ur();
		mete.push_back(meta);
	}
	return mete;
}