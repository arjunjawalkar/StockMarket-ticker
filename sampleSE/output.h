#pragma once
#include"stdafx.h"
class Output
{
public:
	double diff_ask_bid;
	double min;
	double max;
	double volume;
	double sum_volume;
	double timestamp;
	double max_timestamp;
	double numerator;
	double denominator;
	double sum_numerator;
	double sum_denominator;
	double div_sumnr_sumdr;
	Output() = default;
	Output(const Output &obj)
	{
		cout << "Output copy ctr" << endl;
	}
};
