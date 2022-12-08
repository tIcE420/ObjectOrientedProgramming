#pragma once
#include "Zivotinja.hpp"
class Brojac:public Zivotinja{
	static size_t noge_count;
	static size_t class_count;
public:
	Brojac();
	~Brojac();
	void incr_count(Zivotinja a);
	size_t get_noge_count(){ return noge_count; }
	size_t get_class_count() { return class_count; }
	
};