#include "header.hpp"
board::board() {
	width = 5;
	height = 5;


}
board::board(double a, double b) {
	width = a;
	height = b;
	
}

board::board(board& copy) {
	this->matrica = copy.matrica;

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
	for (int i = 0; i < height; i++) {
		matrica.at(a.x).at(i + a.y) = c;
	}
	

}
void board::draw_line(Point a, Point b, char c) {
	double max = 0;
	if (a.y > b.y) {
		max = a.y;
	}
	else {
		max = b.y;
	}
	for (int i = 0; i < b.y; i++) {
		matrica.at(i + a.x).at(i + a.y) = c;
	}
}
void board::draw_board() {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			std::cout << matrica.at(i).at(j);
		}	
	}
}

/*
board::board(board&& other){

}*/