#pragma once
#include "Zivotinja.hpp"
class Ptica : public Zivotinja {
	std::string species;
	size_t broj_nogu;
public:
	Ptica(std::string name);
	Ptica();
	size_t get_legs_count() { return 2; }
	std::string get_species() { return this->species; }
	void change_species(std::string name);

};