#pragma once
#include "Zivotinja.hpp"
#include <vector>

class Brojac{
	size_t leg_count = 0;
	size_t obj_count = 0;
public:
	Brojac(std::vector<Zivotinja*> animal_kingdom);
	~Brojac();
	size_t get_noge_count(){ return leg_count; }
	size_t get_obj_count() { return obj_count; }
	void print_all(std::vector<Zivotinja*> animal_kingdom);
	
};