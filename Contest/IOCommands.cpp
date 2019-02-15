#include "IOCommands.hpp"
#include "Contest.hpp"
#include <string>
//------------------------------------------------------------------------
//							FILE READER IMPL
//------------------------------------------------------------------------
CFileReaderImpl::CFileReaderImpl(CContest& contest, const std::string& path)
	: IFileCommand(path)
	, mContest(contest)
{ 
}

bool CFileReaderImpl::execute() 
{
	bool state = mFile.is_open();
	_ASSERT(state);
	if (state)
	{
		std::cout << "Reading data from: " << mPath << std::endl;
		mFile >> mContest;
	}
	return state;
}

//------------------------------------------------------------------------
//							FILE WRITER IMPL
//------------------------------------------------------------------------

CFileWriterImpl::CFileWriterImpl(CContest& contest, const std::string& path)
	: IFileCommand(path)
	, mContest(contest)
{
}
bool CFileWriterImpl::execute()
{
	bool state = mFile.is_open();
	_ASSERT(state);
	if (state)
	{
		std::cout << "Writing data to: " << mPath << std::endl;
		mFile << mContest;
	}
	return state;
}