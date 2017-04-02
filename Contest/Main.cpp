#include <iostream>
#include <conio.h>

#include "Contest.hpp"

#define USE_DEBUG 1

int main()
{
	CContest obj;
	obj.startContest();

	std::cout << std::endl << "Done.";
	_getch();
}
