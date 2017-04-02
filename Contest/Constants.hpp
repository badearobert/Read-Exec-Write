#pragma once
#ifndef _CONSTANTS_HPP_
#define _CONSTANTS_HPP_
#include <vector>

struct DATA {
	DATA(std::string in, std::string out) : input(in), output(out) { }
	std::string input;
	std::string output;
};
namespace NConstants
{
	// The linkage between input and output files
	const std::vector<DATA> FILES { 
		{ "input\\1.in", "output\\1.out"},
		{ "input\\2.in", "output\\2.out"},
	};
	
}; // NConstants

#endif // _CONSTANTS_HPP_