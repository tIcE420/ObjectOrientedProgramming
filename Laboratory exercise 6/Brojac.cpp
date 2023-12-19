#include "Brojac.hpp"
#include "Zivotinja.hpp"
#include <vector>
Brojac::~Brojac() {

}
Brojac::Brojac(std::vector<Zivotinja*> animal_kingdom){
	int i = 0;
	for (i; i < animal_kingdom.size(); i++) {
		leg_count += animal_kingdom.at(i)->get_legs_count();
	}
	obj_count = i;
}

void Brojac::print_all(std::vector<Zivotinja*> animal_kingdom) {
	for (int i = 0; i < animal_kingdom.size(); i++) {
		std::cout <<"Dodan: " << animal_kingdom.at(i)->get_species()<< std::endl;
		
	}
	std::cout <<"Ukupan zbroj nogu: " << leg_count<<std::endl;
	std::cout << "Ukupan broj objekata: "<<obj_count<<std::endl;

}