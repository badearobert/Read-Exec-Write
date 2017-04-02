#pragma once
#ifndef _ALGORITHM_HPP_
#define _ALGORITHM_HPP_

#include "DataSet.hpp"

class IAlgorithm
{
public:
	virtual ~IAlgorithm() = default;
	virtual void executeAlgorithm(DataSet&) = 0;
};


class CAlgorithmImpl_1 : public IAlgorithm
{
public:
	virtual ~CAlgorithmImpl_1() override { }
	virtual void executeAlgorithm(DataSet&) override;
};

class CAlgorithmImpl_2 : public IAlgorithm
{
public:
	virtual ~CAlgorithmImpl_2() override { }
	virtual void executeAlgorithm(DataSet&) override;
};
#endif //  _ALGORITHM_HPP_