#pragma once
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <typeinfo>

class game {
private:
	std::vector<std::string>words;
	std::vector<std::string> used_words;
	std::vector<std::string> all_tries;
	int wrd = 0;
	std::string incomplete_answer = "";
	std::string word = "";
	std::string guess = "";
	int score = 0;
	int games_played = 0;
public:
	void readwords();
	void printwords();
	void generate_game();

	void game_run();
	std::string get_answer() { return word; }
	std::string get_guess() { return guess; }
	std::string get_incomplete_answer() { return incomplete_answer; }
	int get_score() { return score; }
	int get_games_played() { return games_played; }
	std::vector<std::string> get_used_words() { return used_words;}
	std::vector < std::string> get_all_tries() { return all_tries; }
};
class game_stats: public game {
private:
	
public:
	void get_stats();
	

};