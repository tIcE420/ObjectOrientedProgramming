#pragma once
#include "Kukac.hpp"
class Zohar : public Kukac {
	std::string name;
public:
	size_t get_legs_count() { return 8; }
	std::string get_species() { return "Zohar"; }
	std::string get_name() { return name; }
	void change_name(std::string name);
};