#include "main_head.hpp"
void main() {
	
	std::vector<Zivotinja*> animal_kingdom;
	animal_kingdom = make_any();
	Brojac s(animal_kingdom);
	s.print_all(animal_kingdom);
	destroy_vect(animal_kingdom);

}