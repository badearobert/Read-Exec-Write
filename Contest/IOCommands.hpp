#ifndef _IOCOMMANDS_HPP_
#define _IOCOMMANDS_HPP_
#pragma once

#include <string>
#include <fstream>
#include "Contest.hpp"

class IFileCommand
{
public:
	IFileCommand(const std::string& path) : mPath(path) 
	{ 
		_ASSERT(!mPath.empty());
		
		mFile.open(mPath);
	}

	virtual ~IFileCommand()
	{ 
		if (isOpen())
		{
			mFile.close();
		}
	}

	// either read or write from the file
	virtual bool execute() = 0;

	const bool isOpen() const { return mFile.is_open(); }
protected:
	// the path of the file, received on ctor
	std::string mPath;

	// the file stream
	std::fstream mFile;
};

//------------------------------------------------------------------------
//							FILE READER IMPL
//------------------------------------------------------------------------
class CFileReaderImpl : public IFileCommand
{
public:
	CFileReaderImpl(CContest& contest, const std::string& path);
	virtual bool execute() override;
private:
	CContest& mContest;
};

//------------------------------------------------------------------------
//							FILE WRITER IMPL
//------------------------------------------------------------------------

class CFileWriterImpl : public IFileCommand
{
public:
	CFileWriterImpl(CContest& contest, const std::string& path);
	virtual bool execute() override;
private:
	CContest& mContest;
};

#endif // _IOCOMMANDS_HPP_