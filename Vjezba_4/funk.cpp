#include "header.hpp"
board::board() {
	width = 5;
	height = 5;


}
board::board(double a, double b) {
	width = a;
	height = b;
	matrica.reserve(height);
	for (int i = 0; i < height; i++) {
		std::vector<char> temp;
		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width-1 || i == 0 ||i == height - 1) {
				temp.push_back('O');
			}
			else {
				temp.push_back(' ');

			}
		}
		matrica.push_back(temp);
	}

	
}

board::board(board& copy) {
	this->width = copy.width;
	this->height = copy.height;
	for (int i = 0; i < copy.matrica.size(); i++) {
		this->matrica.push_back(copy.matrica.at(i));
	}
	


}
void board::draw_char(Point a, char c) {
	round(a.x);
	round(a.y);
	if (a.x >= width || a.y >= height) {
		std::cout << "We don't do that here";
	}
	matrica.at(a.x).at(a.y) = c;
}
void board::draw_up_line(Point a, char c) {
	for (int i = 0; i <= height; i++) {
		matrica.at(a.x).at(i + a.y) = c;
	}
	

}
void board::draw_line(Point a, Point b, char c) {
	double dx = b.x - a.x;
	double dy = b.y - a.y;
	double p = 2 * dy - dx;
	double x, y;
	x = a.x;
	y = a.y;
	while (x < b.x) {
		if (p >= 0) {
			matrica.at(x).at(y) = c;
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else{
			matrica.at(x).at(y) = c;
			p = p + 2 * dy;	
		}
		x++;
	}

}
void board::draw_board() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << matrica.at(i).at(j);
		}	
		std::cout << std::endl;
	}
}


board::board(board&& obj) {
	this->matrica = obj.matrica;
	this->height = obj.height;
	this->width = obj.width;
	height = 0;
	width = 0;
	obj.matrica.clear();
	
}
board::~board() {

}