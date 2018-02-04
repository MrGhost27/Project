#include "Grubber.h"
#include "Location.h"

#include <windows.system.h>
#include <iostream>
#include <string>


int main()
{
	char quit = 'q';

	// Player Management (Delegate Me).
	Grubber Timmy("Timmy");
	Grubber Jimmy("Jimmy", 2, 3);
	/*
	//Grubber * pTim = &Timmy;
	//Grubber * pJim = &Jimmy;
	
	//(*pJim).Display_Stats();
	//pTim->Display_Stats();
	// Why can't I do this without pointers? you can. So why did I IMPLEMENT Pointers???
	// Timmy.Display_Stats();
	*/
	Timmy.Display_Stats();
	Jimmy.Display_Stats();

	// Location Management (Delegate Me).
	Location hello;
	std::cout << hello.Desctiption();

	char input;
	
	// Implementation of a do_while loop. "Game Loop".
	do
	{
		std::cout << hello.Options();
		std::cout << "\nOption to Choose: ";
		std::cin >> input;
	} while (input != quit);

	/*	The Location has choices. The Grubber has choices. Displaying both of these at the same time.
	Location choice will advance time. Player choice MAY not? Or by design, WILL not? (Anything the player chooses to DO
	must be location allowed. But anything the player wants to CHECK? could be done by the player choices section)
	
	Location Graphical Depiction? Grid spaces? 2 x 2 or 3 x 3 grid. [ ] [ ] [ ]
																	[ ] [X] [ ]
																	[ ] [ ] [ ]
	*/

	system("pause");
	return 0;
}