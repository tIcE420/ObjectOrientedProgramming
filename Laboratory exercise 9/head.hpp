#include <iostream>
#include <stdexcept> 
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include<tuple>
#include <algorithm>
class my_exception {
public:
	virtual const char* what()const throw() = 0;
};
class unosenje : public my_exception {
public:
	const char* what() const throw();

};
class read_file : public my_exception {
public:
	const char* what() const throw();
};

std::vector<int> read_file_int();
int find_bigger_500(std::vector<int> numbers);
std::tuple <int, int> min_max(std::vector<int> numbers);
std::vector<int> find_lower_300(std::vector<int> numbers);
std::vector<int> sort(std::vector<int> numbers);
bool IsOdd(int i);
bool isnormal(int i);