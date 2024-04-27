#include "HistogramGenerator.h"
#include <iostream>

void HistogramGenerator::generateHistogram(const std::map<std::string, int>& itemFrequencyMap) const {
	// Iterate over each item and its frequency in the map
	for (const auto& pair : itemFrequencyMap) {
		// Print the item name and asterisks representing its frequency
		std::count << std::setw(20) << std::left << pair.first << " ";
		for (int i = 0; i < pair.second; ++i) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}