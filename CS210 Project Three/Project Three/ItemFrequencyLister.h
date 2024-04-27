#ifndef ITEM_FREQUENCY_LISTER_H
#define ITEM_FREQUENCY_LISTER_H

#include <map>
#include <string>

class ItemFrequencyLister {
public:
	// Function to list the frequency of all items in the input file
	std::map<std::string, int> listAllItemFrequencies() const;
};

#endif // ITEM_FREQUENCY_LISTER_H