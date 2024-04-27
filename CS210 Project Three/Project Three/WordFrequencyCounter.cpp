#include "WordFrequencyCounter.h"
#include <fstream>
#include <sstream>

int WordFrequencyCounter::countWordFrequency(const std::string& wordToCount) const {
	// Open input file
	std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
	std::string word;
	int frequency = 0;

	// Read each word from the file
	while (inputFile >> word) {
		// If the word matches the word to count, increment frequency
		if (word == wordToCount) {
			frequency++;
		}
	}

	// Close the input file
	inputFile.close();
	return frequency;
}