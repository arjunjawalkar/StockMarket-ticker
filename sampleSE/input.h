#pragma once
#include"stdafx.h"
class Input
{
	
	map<string, Output> out;
	//Reference ref_obj;
public:
	Input();
	map<string, Output>& ParseInput(const Reference &ref);
};