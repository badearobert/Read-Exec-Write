#pragma once
#ifndef _DATASET_HPP_
#define _DATASET_HPP_

#include "DataInput.hpp"
#include "DataOutput.hpp"

struct DataSet
{
   DataInput input   = {};
   DataOutput output = {};
};

#endif // _DATASET_HPP_