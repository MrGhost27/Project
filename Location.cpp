#include <iomanip>
#include <string>
#include "Location.h"


std::string Location::Desctiption() {
	return "Hello World\n";
}

std::string Location::Options() {
	std::string answer = "Number of options = " + std::to_string(numberOfOptions) + "\n" + optionsText;
	return answer;
}