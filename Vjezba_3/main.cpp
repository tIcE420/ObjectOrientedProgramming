#include"Head.hpp"
int main() {
	//dot bullet;
	weapon gun;
	gun.set_position(0,2,16);
	gun.set_bullet_position();
	gun.set_magazine_capacity(8);
	gun.set_number_of_bullets();
	int num_of_targets_hit = 0;
	size_t n = 0;
	std::cout << "Unesi broj meta"<<std::endl;
	std::cin >> n;
	std::vector<target> mete = generate_targets(n);
	for (int i = 0; i < n; i++) {
		std::cout << "Meta se nalazi na koordinatama:" << std::endl << "Donja lijeva: [" << mete.at(i).get_target_ll_x() << "," << mete.at(i).get_target_ll_y() << "," << mete.at(i).get_target_ll_z()<<"]" << std::endl;
		std::cout << "Gornja desna: [" << mete.at(i).get_target_ur_x() << "," << mete.at(i).get_target_ur_y() << "," << mete.at(i).get_target_ur_z()<<"]" << std::endl;
		if (mete.at(i).state(gun.shoot_bullet_set(true))) {
			num_of_targets_hit++;
			
		}
		
	}
	std::cout << "Number of targets hit is: " << num_of_targets_hit;

	
	
	

	

}