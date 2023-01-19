#include "functions.hpp"
void game::readwords() {
	std::ifstream file("words.txt");
	if (!file.is_open()) {
		std::cout << "Failed to open file" << std::endl;
	}
	std::string line;
	while (std::getline(file, line)) {
		words.push_back(line);
	}

	file.close();

}

void game::printwords() {
	for (int i = 0; i < words.size(); i++) {
		std::cout << words[i];
	}
}
void game::generate_game() {
	wrd = rand() % 214;
	word = words[wrd];
	
	
}

void game::game_run() {
	int guesses = 6;
	std::string input = "";
	std::cout << "Welcome to wordle terminal" << std::endl;
	games_played++;
	used_words.push_back(word);
	while (true) {
		std::cout << "Take a guess of the mistery 5 letter word"<<std::endl;
		std::cin >> guess;
		
		while(guess.size() > 5 || guess.size() < 5) {
			std::cout << "Your input is invalid, you must enter a word with 5 letters and no more" << std::endl;
			std::cin >> guess;
			
		}
		guesses--;
		std::transform(guess.begin(), guess.end(), guess.begin(),[](unsigned char c) { return std::tolower(c); });

		std::cout << "Your guess is: " << guess<<std::endl;
		
		std::transform(word.begin(), word.end(), word.begin(),[](unsigned char c) { return std::tolower(c); });
		
		if (guess == word) {
			std::cout << "Congrats you guessed the word" << " Word: " << word << std::endl;
			std::cout << "Would you like to play another one?" << std::endl;
			std::cout << "If you'd like to play another game input 1, else input anything else" << std::endl;
			score++;
			std::cin >> input;
			if (input[0] != '1') {
				break;
			}
			else if (input[0] == '1') {
				generate_game();
				game_run();
			}
		}
		
		for (int i = 0; i < word.size(); i++) {
			for (int j = 0; j < guess.size(); j++) {
				if (guess[j] == word[i] && i != j) {
					std::cout << "This letter is in the word but not at the same index "<<guess[j];
				}
				if (guess[j] == word[j] && i == j) {
					std::cout << "This letter is in fact in the word and at the exact same index as the mystery word" << std::endl;
					std::cout << guess[j]<<" at index["<<j<<"]"<<std::endl;
					for (auto h = 0; h < 5; h++) {
						if (h == j && incomplete_answer[h] != guess[j]){
							incomplete_answer.insert(h, guess, j, 1);
						}
						else {
							incomplete_answer.append("_");
						}
						
					}
				}
			}
		}
		if (incomplete_answer.size() > 5) {
			incomplete_answer.resize(5);
		}
		std::cout << "So far you've guessed: " << incomplete_answer<<" You have "<<guesses<<" more guesses" << std::endl;
		if (guesses == 0) {
			std::cout << "Sorry you didn't manage to guess the word in six tries" << std::endl;
			std::cout << "The word was: " << word << std::endl;
			std::cout << "Would you like to play another one?" << std::endl;
			std::cout << "If you'd like to play another game input 1, else input anything else" << std::endl;
			all_tries.push_back(incomplete_answer);
			std::cin >> input;
			if (input[0] != '1') {
				break;
			}
			else if (input[0] == '1') {
				generate_game();
				game_run();
			}
		}
	}

}

void game_stats::get_stats() {
	std::cout << "Your game score is: "<<get_score()<<"/"<<get_games_played()<< std::endl;
	std::vector<std::string> list_of_used_words = get_used_words();
	std::vector<std::string> list_of_tries = get_all_tries();
	for (int i = 0; i < list_of_tries.size(); i++) {
		std::cout << "This is your try number "<<i<<":" << std::endl << list_of_tries.at(i);
		
	}
	for (int i = 0; i < list_of_used_words.size(); i++) {
		std::cout << "This is the required word at game " << i << ":" << std::endl << list_of_used_words.at(i);

	}
	list_of_used_words.clear();
	list_of_tries.clear();
	

}