#pragma once
#include "Zivotinja.hpp"
class Pauk : public Zivotinja {
	std::string species;
	size_t broj_nogu;
public:
	Pauk(std::string name);
	Pauk();
	size_t get_legs_count() { return 8; }
	std::string get_species() { return this->species; }
	void change_species(std::string name);
	
};