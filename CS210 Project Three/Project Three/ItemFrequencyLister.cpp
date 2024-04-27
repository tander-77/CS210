#include "ItemFrequencyLister.h"
#include <fstream>
#include <sstream>

std::map<std::string, int> ItemFrequencyLister::listAllItemFrequencies() const {
	// Open input file
	std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
	std::map<std::string, int> itemFrequencyMap;
	std::string item;

	// Read each item from the file
	while (inputFile >> item) {
		// Increment the frequency count for the item
		itemFrequencyMap[item]++;
	}

	// Close the input file
	inputFile.close();
	return itemFrequencyMap;
}