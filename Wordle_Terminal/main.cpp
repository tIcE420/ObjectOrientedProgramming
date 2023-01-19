#include "game.hpp"

int main() {
	game_stats wordle;
	wordle.readwords();
	wordle.generate_game();
	wordle.game_run();
	wordle.get_stats();
	return 0;
}