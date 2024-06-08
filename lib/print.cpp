#include "print.hpp"
#include <iostream>


void prac::Print(char const* const msg)
{
	std::cout << msg << std::endl;
}

void prac::Press_enter_to_exit()
{
	std::cout << "Press Enter to exit";
	std::cin.get();
}