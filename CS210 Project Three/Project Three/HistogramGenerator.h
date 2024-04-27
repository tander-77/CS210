#ifndef HISTOGRAM_GENERATOR_H
#define HISTOGRAM_GENERATOR_H

#include <map>
#include <string>

class HistogramGenerator {
public:
	// Function to generate a histogram based on item frequencies
	void generateHistogram(const std::map<std::string, int>& itemFrequencyMap) const;
};

#endif // HISTOGRAM_GENERATOR_H