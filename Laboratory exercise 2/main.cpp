#include "funkcije.hpp"

int main() {





	vector<int>vect;
	int a = 5;
	int zbroj = 0;
	unos(vect,a);
	
	for (int i = 0; i < a; i++) {
		cout<<"Element["<<i<<"]: " << vect[i] << "\n";
		zbroj += vect[i];
	}

	sort(vect.begin(),vect.end(),greater<int>());

	vect.insert(vect.begin(),0);
	vect.push_back(zbroj);
	for (int i = 0; i < a + 2; i++) {
		cout << "Element[" << i << "]: " << vect[i] << "\n";
		
	}





	string str;
	string str2;
	cout << "Unesi str: ";
	cin >> str;
	cout << "Unesi pod_str: ";
	cin >> str2;
	broj(str, str2);


	
	



	vector <string> str_s;
	for (int i = 0; i < 5; i++) {
		cout << "Unesi str: ";
		cin >> str;
		okreni(str_s, str);
	}

	for (int i = 0; i < 5; i++) {
		cout << str_s[i];
	}
	

	str = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .\n";
	
	str = izbaci(str);
	cout << str;
	
	vector <string>rez;
	vector <string> recenice;
	int n = 0;	
	recenice.push_back("What time is it");
	recenice.push_back("I'm poor I don't have a phone");
	recenice.push_back("Money I need");
	int random = 1;

	rez = pig_latin(recenice.at(random));
	for (int i = 0; i < rez.size(); i++) {
		cout << rez.at(i);
	}
	
	return 0;

}
