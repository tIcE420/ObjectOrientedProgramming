#include "Brojac.hpp"
size_t Brojac::noge_count = 0;
size_t Brojac::class_count = 0;
Brojac::~Brojac() {

}
Brojac::Brojac() {

}
void Brojac::incr_count(Zivotinja a) {
	noge_count+=a.get_nogu();
	class_count++;
}


