#include "Grubber.h"

Grubber::Grubber(std::string newname, int newstrength, int newspeed)
	: name(newname), strength(newstrength), speed(newspeed)
{
	//
}

void Grubber::Display_Stats() {
	std::cout << "Grubber Name: " << name << std::endl;
	std::cout << "\tStrength: " << strength << std::endl;
	std::cout << "\tSpeed: " << speed << std::endl;
	std::cout << "\n\tHunger: " << hunger_ << std::endl;
	std::cout << "\n\tEnergy: " << energy_ << std::endl;
}