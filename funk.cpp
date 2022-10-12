#include "myh.hpp"
void ispis(int* niz, int broj_el) {
	int a = 0;
	int i = 0;
	for (i = 0; i < broj_el; i++) {
		cout << niz[i];
	}
}
void unos(int* niz, int broj_el) {
	int a = 0;
	int i = 0;
	for (i = 0; i < broj_el; i++) {
		cin >> a;
		niz[i] = a;
	}
}
int* nizovi(int* niz, int broj_el,int* broj) {
	int i = 0;
	int temp = 0;
	int j = 0;
	int br = 0;
	int* niz2 = new int[broj_el];
	for (i = 0; i < broj_el; i++) {
		if (niz[i] != niz[j] && niz[i] != niz[i - 1]) {
			niz2[br] = niz[i];
			br++;
		}
		for (j = broj_el; j > 0; j--) {
		}
	}
	*broj = br;
	return niz2;
}

int& funk(int* niz) {
	int i = 0;
	for (i = 0; i < 5; i++) {
		if (niz[i] > 0) {
			return niz[i];
		}
	}


}
int* niz_n(int* niz, int n) {
	int i = 0;
	int j = 0;
	int* niz2 = new int[n];
	niz[0] = 1;
	niz[1] = 1;
	for (i = 2; i < n; i++) {
		niz[i] = niz[i - 1] + niz[i - 2];
		niz2[j] = niz[i];
		j++;
	} 
	return niz2;
}
void vector_new(size_t sz = 0) {
	MyVector xy;
	xy.arr = new int[sz];

}

void vector_delete() {
	MyVector xy;
	delete xy.arr;
	xy.arr = 0;

	
}
/* adds a new element at the end of the vector */
void vector_push_back(int n) {
	MyVector xy;
	xy.arr[xy.size - 1] = n;
}
/* removes the last element in the vector */
void vector_pop_back() {
	MyVector xy;
	int a;
	xy.arr[xy.size] = a;
	
}
/* returns a reference to the first element in the vector*/
int& vector_front() {
	MyVector xy;
	return xy.arr[0];
}
/* returns a reference to the last element in the vector */
int& vector_back() {
	MyVector xy;
	return xy.arr[xy.size - 1];
}
/* returns the number of the elements in the vector */
size_t vector_size() {
	MyVector xy;
	return xy.size;
} 


void print_vector() {
	MyVector xy;
	for (int i = 0; i < xy.size; i++) {
		printf("%d",xy.arr[i]);
	}
}