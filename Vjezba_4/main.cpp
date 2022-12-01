#include "header.hpp"

int main() {
	board a(30, 20);
	Point p4;
	Point p3;
	Point p1;
	Point p2;
	p1.x = 2;
	p1.y = 2;
	p2.x = 8;
	p2.y = 8;
	p3.x = 2;
	p3.y = 8;
	p4.x = 16;
	p4.y = 8;
	char c = '*';
	//a.draw_up_line(p1,c);
	//a.draw_char(p1,c);
	a.draw_line(p1, p2, 'x');
	a.draw_line(p3,p4,'x');
	a.draw_board();
}