#pragma once
#include "Zivotinja.hpp"
class Pauk : public Zivotinja {
	std::string karakteristika;
	size_t broj_nogu;
public:

	Pauk() : broj_nogu(8) {}
	size_t get_nogu()override {
		return broj_nogu;
	}
};