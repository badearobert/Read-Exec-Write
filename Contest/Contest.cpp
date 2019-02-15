#include "Contest.hpp"
#include "IOCommands.hpp"
#include "Constants.hpp"
#include <iostream>
#include <fstream>

#define USE_DEBUG 0

void CContest::clearData()
{
   myDataSet = {};
}

void CContest::start()
{
	setAlgorithm(std::unique_ptr<IAlgorithm>(new CAlgorithmImpl_1));

	for (const auto &item : NConstants::FILES)
	{
		clearData();

		// reading data
		CFileReaderImpl reader(self(), item.input);
		reader.execute();
		
#if USE_DEBUG
		myDataSet.input.display();
#endif
		if (mAlgorithm)
		{
         mAlgorithm->executeAlgorithm(myDataSet);
		}

#if USE_DEBUG
	   myDataSet.output.display();
#endif

		CFileWriterImpl writer(self(), item.output);
		writer.execute();

		std::cout << std::endl;
	}
}

//-------------------------------------------------------------------------------------------------
//										STREAM FUNCTIONS
//-------------------------------------------------------------------------------------------------

std::istream& operator >> (std::istream & in, CContest &obj)
{
	// @TODO: read into the input data
   in >> obj.myDataSet.input.temp;

	return in;
}

std::ostream& operator<<(std::ostream & out, const CContest &obj)
{
	// @TODO: write into the output data
	out << obj.myDataSet.output.temp << std::endl;

	return out;
}