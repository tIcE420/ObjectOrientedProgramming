#pragma once
#include "Zivotinja.hpp"
class Sisavac : public Zivotinja {
	std::string species;
	size_t broj_nogu;
public:
	Sisavac(std::string name);
	Sisavac();
	size_t get_legs_count() { return 4; }
	std::string get_species() { return this->species; }
	void change_species(std::string name);
};