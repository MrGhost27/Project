#pragma once

#include <iostream>
#include <string>

// Consider a Base mover class. So Enemies and Friendlies can share common BASE functionality?

class Grubber {
public:
	Grubber(std::string, int str = 1, int spd = 1);
	void Display_Stats();
private:
	const std::string name;

	int strength;
	int speed;

	const int statMax = 100;
	const int statMin = 0;

	int hunger_ = 10;
	int energy_ = 10;
	int fat_ = 10;

	int immuneStrength_;
	enum immuneState {
		HEALTHY,
		SICK
	};

	int morale_;
	enum moraleState
	{
		HAPPY,
		SAD
	};

	int Skills[8][2] { 0, 0 };
	enum Skilltypes {
		HERBALISM,
		MEDICINE,
		FIRELIGHTING,

		STALKING,
		MELEE,
		RANGED,

		LOCKPICKING,
		CRAFTING
	};

	
};
/*

hunger / daily.affects morale and energy.
energy / constantly deminishing.If above a certain level, converts to fat.
/ if below a certain level, burns fat.
fat / Fat can make you slower, and taken into account for asects of movement.
/ also directly related to immuneStrength and damage absorbance.

immuneStrength
immuneState

morale
moraleState

isAlive	// Simplest Boolean.

	: attributes
	strength // damage, carry weight
	speed    // 

	: skills
	herbalism / identification of
	medicine / diagnosis and treatment of illness and injury.

	firelighting / success at starting a fire

	stalking / part of hunting ?
	melee / success at fighting close quarters
	ranged / success with spear / dropping objects

	lockpicking / getting access to new areas.
	crafting / success at converting ingredients.


	carrying capacity.Bags ? Bulk
*/
