#include "Menu.h"
#include "WordFrequencyCounter.h"
#include "ItemFrequencyLister.h"
#include "HistogramGenerator.h"
#include <iostream>
#include <string>

int Menu::displayMenuAndGetSelection() {
	int selection;

	// Display menu options
	std::cout << "Menu Options:\n";
	std::cout << "1. Find Frequency of a Word\n";
	std::cout << "2. List Frequencies of All Items\n";
	std::cout << "3. Generate Histogram\n";
	std::cout << "4. Exit\n";
	std::cout << "Enter your choice: ";
	std::cin >> selection;

	return selection;
}

void Menu::processSelection(int selection) {
	WordFrequencyCounter wordCounter;
	ItemFrequencyLister itemLister;
	HistogramGenerator histogramGenerator;

	switch (selection) {
	case 1: {
		std::string word;
		std::cout << "Enter the word to find frequency: ";
		std::cin >> word;
		int frequency = wordCounter.countWordFrequency(word);
		std::cout << "Frequency of \"" << word << "\": " << frequency << std::endl;
		break;
	}
	case 2: {
		// List frequencies of all item
		auto itemFrequencies = itemLister.listAllItemFrequencies();
		for (const auto& pair : itemFrequencies) {
			std::cout << pair.first << ": " << pair.second << std::endl;
		}
		break;
	}
	case 3: {
		// Generate histogram based on item frequencies
		auto itemFrequencies = itemLister.listAllItemFrequencies();
		histogramGenerator.generateHistogram(itemFrequencies);
		break;
	}
	case 4:
		// Exit the program
		std::cout << "Exiting program.\n";
		exit(0);
	default:
		std::cout << "Invalid choice. Please select agian.\n";
		break;
	}
}

void Menu::run() {
	// Main menu loop
	while (true) {
		int selection = displayMenuAndGetSelection();
		processSelection(selection);
	}
}
