#pragma once
#ifndef _CONTEST_HPP_
#define _CONTEST_HPP_

#include "Algorithm.hpp"
#include "DataSet.hpp"
#include <memory>

class CContest
{
public:
   // set the algorithm used for writing the output data based on the input received
   void setAlgorithm(std::unique_ptr<IAlgorithm> algorithm)
   {
      mAlgorithm = std::move(algorithm);
   }

   void start();

   friend std::istream& operator >> (std::istream&, CContest&);
   friend std::ostream& operator << (std::ostream&, const CContest&);

private:
   void clearData();

   std::unique_ptr<IAlgorithm> mAlgorithm = {};

   DataSet myDataSet = {};
	CContest& self();
};

inline CContest& CContest::self()
{
	return *this;
}

#endif // _CONTEST_HPP_