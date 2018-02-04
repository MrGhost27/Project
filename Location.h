#pragma once

#include <string>

class Location
{
public:
	std::string Desctiption();
	std::string Options();
	const int numberOfOptions = 1;
	int options[1];

private:
	std::string optionsText = "Option 1 to play, q to quit";
};

