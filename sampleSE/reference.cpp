//#include "reference.h"
#include"stdafx.h"

//Here we are parsing the reference file to get necessary details like input file, out put file and position
//of values in input file.
Reference::Reference(string filename)
{
	cout << "Reference:"<<filename << endl;
	ifstream file(filename);
	string str;
	if (file.is_open())
	{
		while (getline(file, str))
		{
			//cout << str << endl;
			vector<string> str_split = split(str,'=');
			if (str_split[0] == "timestamp")
				timestamp = stoi(str_split[1]);
			else if (str_split[0] == "ticker")
				ticker = stoi(str_split[1]);
			else if (str_split[0] == "bid")
				bid = stoi(str_split[1]);
			else if (str_split[0] == "bidsize")
				bidsize = stoi(str_split[1]);
			else if (str_split[0] == "ask")
				ask = stoi(str_split[1]);
			else if (str_split[0] == "asksize")
				asksize = stoi(str_split[1]);
			else if (str_split[0] == "volume")
				volume = stoi(str_split[1]);
			else if (str_split[0] == "input")
				input = str_split[1];
			else if (str_split[0] == "output")
				output = str_split[1];
			else if (str_split[0] == "delimiter")
				delimiter = str_split[1].at(0);
		}
	}
	file.close();
}