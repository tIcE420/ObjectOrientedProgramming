#include "funkcije.hpp"

void unos(vector<int>& vect,int exp_sz) {
	int unos = 0;
	for (int i = 0; i < exp_sz; i++) {
		cout<<"Unesite: "<< i <<"."<< "Element niza: ";
		cin << unos;
		vect.push_back(unos);
	}
}