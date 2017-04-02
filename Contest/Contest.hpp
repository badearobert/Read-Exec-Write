#pragma once
#ifndef _CONTEST_HPP_
#define _CONTEST_HPP_

#include "Algorithm.hpp"
#include "DataSet.hpp"
#include <memory>

class CContest
{
public:
	CContest() : mAlgorithm(nullptr) { }

	// set the algorithm used for writing the output data based on the input received
	void setAlgorithm(std::unique_ptr<IAlgorithm> algorithm)
	{
		mAlgorithm = std::move(algorithm);
	}

	// start the program
	void startContest();

	// stream operations
	friend std::istream& operator >> (std::istream&, CContest&);
	friend std::ostream& operator << (std::ostream&, const CContest&);

private:
	// reset the data (both input & output)
	void clearData();

	// Algorithm used in the contest. see setAlgorithm() func
	std::unique_ptr<IAlgorithm> mAlgorithm;

	// the set of data used for input & output
	DataSet myDataSet;

	// @returns *this
	CContest& self();

};

inline CContest& CContest::self()
{
	return *this;
}

#endif // _CONTEST_HPP_