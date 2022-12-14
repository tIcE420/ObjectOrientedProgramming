#include "main_head.hpp"

std::vector<Zivotinja*> make_land_octopuses(std::vector<Zivotinja*> animal_kingdom) {
	std::cout << "Enter how many nopes do you want?";
	int a = 0;
	std::cin >> a;
	
	std::string name;
	for (int i = 0; i < a; i++) {
		Zivotinja* many_legged_nope;
		std::cout << "Enter the name of scary nope num: "<<i + 1<<" ";
		std::cin >> name;
		if (name == "Tarantula" || name == "tarantula")
		{
			std::cout << "Enter the name of your tarantino_nope" << std::endl;;
			std::cin >> name;
			animal_kingdom = make_tarantinotula(animal_kingdom,name);
		}
		else {
			Pauk* novi = new Pauk();
			novi->change_species(name);
			many_legged_nope = novi;
			animal_kingdom.push_back(many_legged_nope);
		}

		
	}
	
	return animal_kingdom;
	
}
std::vector<Zivotinja*> make_birbs(std::vector<Zivotinja*> animal_kingdom) {
	std::cout << "Enter how many birbs do you want?";
	int a = 0;
	std::cin >> a;
	std::string name;
	for (int i = 0; i < a; i++) {
	
		Zivotinja* birb;
		std::cout << "Enter the birb name num: " << i + 1 << " ";
		std::cin >> name;
		if (name == "vrabac" || name == "Vrabac" || name == "Sparrow" || name == "sparrow") {
			std::cout << "Enter the name of your Spparow: " << std::endl;
			std::cin >> name;
			animal_kingdom = make_vrabac(animal_kingdom, name);
		}
		else {
			Ptica* novi = new Ptica();
			novi->change_species(name);
			birb = novi;
			animal_kingdom.push_back(birb);
		}
	}

	return animal_kingdom;

}
std::vector<Zivotinja*> make_milk_lovers(std::vector<Zivotinja*> animal_kingdom) {
	std::cout << "Enter how many milkers do you want?";
	int a = 0;
	std::cin >> a;
	std::string name;
	for (int i = 0; i < a; i++) {

		Zivotinja* milker;
		std::cout << "Enter the name of milker num: " << i + 1 << " ";
		std::cin >> name;
		Sisavac* novi = new Sisavac();
		novi->change_species(name);
		milker = novi;
		animal_kingdom.push_back(milker);
	}

	return animal_kingdom;
}
std::vector<Zivotinja*> make_buzzers(std::vector<Zivotinja*> animal_kingdom) {
	std::cout << "Enter how many buzzers do you want?";
	int a = 0;
	std::cin >> a;
	std::string name;
	for (int i = 0; i < a; i++) {

		Zivotinja* buzzer;
		std::cout << "Enter the name of needle buzz poker num: " << i + 1 << " ";
		std::cin >> name;
		if (name == "Zohar" || name == "zohar" || name == "cockroach" || name == "roach" || name == "Cockroach" || name == "Roach") {
			animal_kingdom = make_roach(animal_kingdom,name);
		}
		else {
			Kukac* novi = new Kukac();
			novi->change_species(name);
			buzzer = novi;
			animal_kingdom.push_back(buzzer);
		}
	}

	return animal_kingdom;
}
std::vector<Zivotinja*> make_tarantinotula(std::vector<Zivotinja*> animal_kingdom,std::string name) {
	Tarantula* Mirko = new Tarantula();
	Mirko->change_name(name);
	Zivotinja* tarantino;
	tarantino = Mirko;
	
	animal_kingdom.push_back(tarantino);
	return animal_kingdom;
	
}
std::vector<Zivotinja*> make_vrabac(std::vector<Zivotinja*> animal_kingdom, std::string name) {
	Vrabac* Mirko = new Vrabac();
	Mirko->change_name(name);
	Zivotinja* birb ;
	birb = Mirko;

	animal_kingdom.push_back(birb);
	return animal_kingdom;
}

std::vector<Zivotinja*> make_roach(std::vector<Zivotinja*> animal_kingdom, std::string name) {
	Zohar* Mirko = new Zohar();
	Mirko->change_name(name);
	Zivotinja* roach;
	roach = Mirko;

	animal_kingdom.push_back(roach);
	return animal_kingdom;

}
std::vector<Zivotinja*>make_any(){
	std::cout << "You are able to make x ammount of any objects" << std::endl;
	std::cout << "Choices: " << std::endl;
	std::cout << "Spider" <<std::endl;
	std::cout << "Bird" << std::endl;
	std::cout << "Mammal" << std::endl;
	std::cout << "Insect" << std::endl;
	std::string choice;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	std::vector<Zivotinja*> animal_kingdom;
	while (true) {
		if (choice == "Spider") {
			animal_kingdom = make_land_octopuses(animal_kingdom);
			std::cout << "Do you want to make any more if yes just type in your choice"<<std::endl;
			std::cout << "If not just type 1";
			std::cin >> choice;
		}
		else if (choice == "Bird") {
			animal_kingdom = make_birbs(animal_kingdom);
			std::cout << "Do you want to make any more if yes just type in your choice" << std::endl;
			std::cout << "If not just type 1";
			std::cin >> choice;
		}
		else if (choice == "Mammal") {
			animal_kingdom = make_milk_lovers(animal_kingdom);
			std::cout << "Do you want to make any more if yes just type in your choice" << std::endl;
			std::cout << "If not just type 1";
			std::cin >> choice;
		}
		else if (choice == "Insect") {
			animal_kingdom = make_buzzers(animal_kingdom);
			std::cout << "Do you want to make any more if yes just type in your choice" << std::endl;
			std::cout << "If not just type 1";
			std::cin >> choice;
		}
		else if (choice == "1") {
			break;
		}
		else {
			std::cout << "You either terminated the program or you didn't type in the exact choice name" << std::endl;
			std::cout << "If've you missinputed type in your choice again"<<std::endl;
			std::cout << "If not then type in 1";
			std::cin >> choice;
			if (choice == "1") {
				break;
			}
		}
	}
	return animal_kingdom;
}
void destroy_vect(std::vector<Zivotinja*> animal_kingdom) {
	for (int i = 0; i < animal_kingdom.size(); i++) {
		delete animal_kingdom.at(i);
	}
	
}