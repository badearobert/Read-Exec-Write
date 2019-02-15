#pragma once
#ifndef _DATAOUTPUT_HPP_
#define _DATAOUTPUT_HPP_

#include <iostream>

using std::cout;
//------------------------------------------------------------------------
//							DATA OUTPUT STRUCTURES
//------------------------------------------------------------------------
struct DataOutput 
{
	void display() const
	{
		cout << "\n----------------------------------\n";
		cout << "DISPLAYING OUTPUT DATA \n";
		// @TODO: display variables
		cout << "\n----------------------------------\n";
	}
	// @TODO: add member variables as output 
   int temp;
};

#endif