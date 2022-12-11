#pragma once
#include "Pauk.hpp"
class Tarantula :public Pauk {
	std::string name;
public:
	size_t get_legs_count() { return 8; }
	std::string get_species() { return "Tarantula"; }
	std::string get_name() { return name; }
	void change_name(std::string name);
};