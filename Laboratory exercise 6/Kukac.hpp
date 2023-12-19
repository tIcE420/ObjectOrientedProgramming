#pragma once
#include "Zivotinja.hpp"
class Kukac : public Zivotinja {
	std::string species;
	size_t broj_nogu;
public:
	Kukac(std::string name);
	Kukac();
	size_t get_legs_count() { return 8; }
	std::string get_species() { return this->species; }
	void change_species(std::string name);

};