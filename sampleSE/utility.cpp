#include"stdafx.h"
//this function splits the string to vector of strings given a delimiter
vector<string> split(string line,char delimiter)
{
	vector<string> elements;
	istringstream ss(line);
	string value;
	std::vector<std::string> tokens;
	for (std::string each; std::getline(ss, each, delimiter); tokens.push_back(each));
	return tokens;
}