#pragma once
#include <iostream>

class Zivotinja{
	std::string vrsta;
	size_t broj_nogu;
public:
	Zivotinja() : broj_nogu(2) {}
	virtual size_t get_nogu() { return broj_nogu; }
	virtual void set_noge(size_t noge);
	virtual std::string get_vrsta() { return vrsta; }
	virtual void set_vrsta(std::string vrsta);
	
	
	
};
