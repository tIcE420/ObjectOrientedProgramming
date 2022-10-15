#include "myh.hpp"
void ispis(int* niz, int broj_el) {
	int i = 0;
	if (niz == NULL) {
		cout << "Array not found";
	}
	for (i = 0; i < broj_el; i++) {
		cout << niz[i];
	}
}
void unos(int* niz, int broj_el) {
	int a = 0;
	int i = 0;
	if (niz == NULL) {
		cout << "Array not found";
	}
	for (i = 0; i < broj_el; i++) {
		cin >> a;
		niz[i] = a;
	}
}
int* nizovi(int* niz, int broj_el,int* broj) {
	int i = 0;
	int j = 0;
	int br = 0;
	int* niz2 = new int[broj_el];
	for (i = 0; i < broj_el; i++) {
		if(niz){
			if (niz[i] != niz[j] && niz[i] != niz[i - 1]) {
			niz2[br] = niz[i];
			br++;
			}
			for (j = broj_el; j > 0; j--) {
			}
		}
		else {
				return NULL;
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
		else {
			return i;
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
void MyVector::vector_new(size_t sz) {
	capacity = sz;
	if (sz <= 0) {
		capacity = 1;
	}
	size = 0;
	arr = new int[capacity];
	
}

void MyVector::vector_delete() {
	delete (arr);
}

void MyVector::vector_push_back(int n) {
	if (size == capacity) {
		capacity *= 2;
		int *NewArr = new int[capacity];
		for (int i = 0; i < size; i++) {
			NewArr[i] = arr[i];
		}
		delete(arr);
		arr = NewArr;
	}
	arr[size] = n;
	size++;
	

}

void MyVector::vector_pop_back() {
	if (size < capacity / 2) {
		capacity /= 2;
		int* NewArr = new int[capacity];
		for (int i = 0; i < size; i++) {
			NewArr[i] = arr[i];
		}
		delete(arr);
		arr = NewArr;
	}
	arr[size - 1] = NULL;
	size--;
}

int& MyVector::vector_front() {
	int a = 0;
	if (arr != NULL) {
		return arr[0];
	}
	return a;
}

int& MyVector::vector_back() {
	int a = 0;
	if (arr != NULL) {
		return arr[size - 1];
	}
	return a;

}
size_t MyVector::vector_size() {
	return size;
}

void MyVector::print_vector() {
	if (arr == NULL) {
		cout << "Vector not found";
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}