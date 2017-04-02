#pragma once
#ifndef _DATAOUTPUT_HPP_
#define _DATAOUTPUT_HPP_

#include <iostream>

using std::cout;
using std::endl;
//------------------------------------------------------------------------
//							DATA OUTPUT STRUCTURES
//------------------------------------------------------------------------
struct DataOutput 
{
	virtual void clear() 
	{
		*this = DataOutput{};
	}

	void display() const
	{
		cout << "\n----------------------------------\n";
		cout << "DISPLAYING OUTPUT DATA \n";
		// @TODO: display variables
		cout << "\n----------------------------------\n";
	}
	// @TODO: add member variables as output 
};

#endif