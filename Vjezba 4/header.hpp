#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

typedef struct {
	double x, y;
}Point;
class board {
	std::vector<std::vector<char>>matrica;	
	uint32_t width, height;
public:
	void draw_char(Point a,char c);
	void draw_up_line(Point a, char c);
	void draw_line(Point a, Point b, char c);
	void draw_board();
	double get_width() { return height; }
	double get_height() { return width; }
	board();
	board(board&);
	board(double a, double b);
	board(board&& obj);
	~board();

};