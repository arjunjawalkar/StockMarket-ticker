#pragma once
#include"stdafx.h"
using namespace std;
class Reference
{
public:
	string input;
	string output;
	int timestamp;
	int ticker;
	int bid;
	int bidsize;
	int ask;
	int asksize;
	long int volume;
	char delimiter;
	Reference(string filename);
	Reference() = default;
	
};