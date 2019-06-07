// sampleSE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	Reference ref(argv[1]);
	Input input;
	map<string, Output> output_map;
	input.ParseInput(ref, output_map);
	//void ParseInput(const Reference &ref, map<string, Output> &out)

	//generating output file
	ofstream file(ref.output);
	if (file.is_open())
	{
		//for (auto itr_out : output_map)
		for (auto itr_out = output_map.begin(); itr_out != output_map.end(); itr_out++)
		{
			//writing to output file
			file << itr_out->first << "," << itr_out->second.min << "," << itr_out->second.max << "," << itr_out->second.max_timestamp
				<< "," << itr_out->second.div_sumnr_sumdr << endl;
		}
	
	}
	file.close();
	system("pause");
    return 0;
}

