#include "Contest.hpp"
#include "IOCommands.hpp"
#include "Helper.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void CContest::clearData()
{
	myDataSet.clearSet();
}

void CContest::startContest()
{
	setAlgorithm(unique_ptr<IAlgorithm>(new CAlgorithmImpl_1));

	for (const auto &item : NConstants::FILES)
	{
		// clear data
		clearData();

		// reading data
		CFileReaderImpl reader(self(), item.input);
		_ASSERT(reader.execute());
		
		// OPTIONAL - display the input data
		//myDataSet.input.display();

		// applying algorithm
		if (mAlgorithm)
		{
			mAlgorithm->executeAlgorithm(myDataSet);
		}

		// OPTIONAL - display the output data
		//myDataSet.output.display();

		// writing data
		CFileWriterImpl writer(self(), item.output);
		_ASSERT(writer.execute());

		std::cout << std::endl;
	}
}

//-------------------------------------------------------------------------------------------------
//										STREAM FUNCTIONS
//-------------------------------------------------------------------------------------------------

std::istream& operator >> (std::istream & in, CContest &obj)
{
	// @TODO: read into the input data

	//in >> obj.myDataSet.input.data << endl;

	return in;
}

std::ostream& operator<<(std::ostream & out, const CContest &obj)
{
	// @TODO: write into the output data
	
	//out << obj.myDataSet.output.data << endl;

	return out;
}