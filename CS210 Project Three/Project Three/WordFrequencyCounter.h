#ifndef WORD_FREQUENCY_COUNTER_H
#define	WORD_FREQUENCY_COUNTER_H

#include <string>

class WordFrequencyCounter {
public:
	// Function to count the frequency of a specific word in the input file
	int countWordFrequency(const std::string& wordToCount) const;
};

#endif // WORD_FREQUENCY_COUNTER_H
