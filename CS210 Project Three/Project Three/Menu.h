#ifndef MENU_H
#define MENU_H

class Menu {
public:
	// Function to display the menu options and get user selection
	static int displayMenuAndGetSelection();

	// Function to process the user's selection
	static void processSelection(int selection);

	// Funtion to run the menu loop
	static void run();
};

#endif // MENU_H