#include "main_head.hpp"
//Krivo si skonto procitaj do kraja dbilu
void main() {
	Pauk Mirko;
	Pauk Zarko;
	Brojac a;
	a.incr_count(Mirko);
	a.incr_count(Zarko);
	std::cout<<a.get_class_count()<<std::endl;
	std::cout << a.get_noge_count();
}