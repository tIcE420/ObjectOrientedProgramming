#include <iostream>
#include <stdexcept> 
#include <ctime>
#include <vector>
#include <string>
#include <iostream>
class my_exception {
public:
	virtual const char* what()const throw() = 0;
};
class unosenje : public my_exception {
public:
	const char* what() const throw();

};
class operacije : public my_exception {
public:
	const char* what() const throw();

};
class nula : public my_exception {
public:
	const char* what() const throw();

};
int get_integer();
int calculate(int n1, int n2, char op);