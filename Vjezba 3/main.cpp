#include"Head.hpp"
int main() {
	//dot bullet;
	weapon gun;
	target two;
	target one;
	gun.set_position(0,2);
	gun.set_bullet_position();
	gun.set_magazine_capacity(8);
	gun.set_number_of_bullets();
	two.set_target_ll(2,4,0);
	two.set_target_ur(4,8,7);
	one.set_target_ll(-5,2,1);
	one.set_target_ur(-2,5,6);
	

	gun.set_position(gun.get_position().get_x(), gun.get_position().get_y() + 5);
	while (gun.get_current_ammo()) {
		two.state(gun.shoot_bullet_set(1));
	}
	

	

}