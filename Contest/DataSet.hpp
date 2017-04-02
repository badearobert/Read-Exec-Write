#pragma once
#ifndef _DATASET_HPP_
#define _DATASET_HPP_

#include "DataInput.hpp"
#include "DataOutput.hpp"

struct DataSet
{
	// init values, on ctor 
	DataSet()
	{
		clearSet();
	}

	DataInput input;
	DataOutput output;

	// clear the data 
	void clearSet()
	{
		input.clear();
		output.clear();
	}
};

#endif // _DATASET_HPP_