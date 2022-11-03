#include"Heather=D.hpp"
int main() {
	//dot bullet;
	weapon Luger;
	target black;
	target ooga;
	Luger.set_position(0,2);
	Luger.set_bullet_position();
	Luger.set_magazine_capacity(8);
	Luger.set_number_of_bullets();
	black.set_target_ll(2,4,0);
	black.set_target_ur(4,8,7);
	ooga.set_target_ll(-5,2,1);
	ooga.set_target_ur(-2,5,6);
	

	Luger.set_position(Luger.get_position().get_x(),Luger.get_position().get_y() + 5);
	while (Luger.get_current_ammo()) {
		black.state(Luger.shoot_bullet_set(1));
	}
	

	

	//Luger.set_position(rotate(Luger.get_position()).get_x(), rotate(Luger.get_position()).get_y());

	//ako se okrene za 180 -x-y
	//ako se okrene desno za 90 x = y, y = -x
	//ako se okrene ulivo za 90 x = -y, y = x
	
}