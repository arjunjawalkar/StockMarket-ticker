#pragma once
#include"stdafx.h"
class Input
{
	
	//map<string, Output> out;
	//Reference ref_obj;
public:
	Input();
	Input(const Input &obj)
	{
		cout << "Input copy ctr" << endl;
	}
	//map<string, Output>& ParseInput(const Reference &ref);
	void ParseInput(const Reference &ref, map<string, Output> &out);
};