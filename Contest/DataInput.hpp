#pragma once
#ifndef _DATAINPUT_HPP_
#define _DATAINPUT_HPP_

#include <iostream>

using std::cout;
//------------------------------------------------------------------------
//							DATA INPUT STRUCTURES
//------------------------------------------------------------------------
struct DataInput
{
	void display() const
	{
		cout << "\n----------------------------------\n";
		cout << "DISPLAYING INPUT DATA \n";
		// @TODO: display variables
		cout << "\n----------------------------------\n";
	}
	// @TODO: add member variables as input 
   int temp;
};

#endif