#include "funkcije.hpp"

void unos(vector<int>& vect,int exp_sz) {
	int unos = 0;
	for (int i = 0; i < exp_sz; i++) {
		cout<<"Unesite: "<< i <<"."<< "Element niza: ";
		cin >> unos;
		vect.push_back(unos);
	}
}
void unos_2(vector<int>& vect, int start, int stop) {
	int unos = start;
	if (stop < start) {
		cout << "Stop value must be bigger than start";
		exit(1);
	}
	int end = stop - start;

	for (int i = 0; i < end; i++) {
		cout << "Unesite: " << i << "." << "Element niza: ";
		cin >> unos;
		vect.push_back(unos);
	}

}

void broj(string str,string str_2) {
	int i = 0;
	size_t poz = 0;
	if (str.find(str_2) != NULL) {
		poz = str.find(str_2);
	}
	while (poz != str.npos) {
		i++;
		poz = str.find(str_2, poz + 1);
		
	}
	cout << i;
}
void okreni(vector<string>& stringovi, string str) {
	reverse(str.begin(), str.end());
	stringovi.push_back(str);
	sort(stringovi.begin(), stringovi.end());

}

string izbaci(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (ispunct(str[i]) && str[i - 1] == ' ') {
			str.erase(i - 1, 1);
		}
	}
	for (int i = 0; i < str.length(); i++) {
		if (ispunct(str[i]) && str[i + 1] != ' ') {
			if (i == str.length()) {
				str[i] = '\0';
			}
			str.insert(i + 1,1,' ');
			
			
			
		}
	}
	return str;
}

vector <string> english_latin(string str) {
	string subs;
	vector <string> rici;
	string recenica;
	for (int i = 0; i < str.length(); i++) {
		if (isupper(str.at(i))) {
			str.at(i) += 32;
		}
	}
	stringstream iss(str);
	while (iss >> subs) {
		rici.push_back(subs);
		
	}
	
	for (int j = 0; j < rici.size(); j++) {
		if (rici.at(j).at(0) != 'a' && rici.at(j).at(0) != 'e' && rici.at(j).at(0) != 'i' && rici.at(j).at(0) != 'o' && rici.at(j).at(0) != 'u') {
			rici.at(j).insert(rici.at(j).end(), rici.at(j).at(0));
			rici.at(j).erase(rici.at(j).begin());
			if (rici.at(j).at(0) != 'a' && rici.at(j).at(0) != 'e' && rici.at(j).at(0) != 'i' && rici.at(j).at(0) != 'o' && rici.at(j).at(0) != 'u') {
				rici.at(j).insert(rici.at(j).end(), rici.at(j).at(0));
				rici.at(j).erase(rici.at(j).begin());
			}
			rici.at(j).append("ay");
		}
		else {
		rici.at(j).append("hay");
		}
	}
	for (int j = 0; j < rici.size(); j++) {
		recenica += rici.at(j);
		recenica += ' ';
	}
	rici.clear();
	rici.push_back(recenica);
	return rici;
		
	

}

