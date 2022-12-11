#pragma once
#include "Ptica.hpp"
class Vrabac : public Ptica {
	std::string name;
public:
	size_t get_legs_count() { return 2; }
	std::string get_species() { return "Vrabac"; }
	std::string get_name() { return name; }
	void change_name(std::string name);
};