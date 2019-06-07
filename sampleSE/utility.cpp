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
//This function has implementation for the formula
//Sum(Bid*AskSize + Ask*BidSize)/Sum(AskSize+BidSize)
void formula1(vector<string>& input_vec, map<string, Output> &out, const Reference &ref,Output &out_obj)
{
	//double sum_numerator, sum_denominator, div_sumnr_sumdr;
	//find (Bid*AskSize + Ask*BidSize)
	out_obj.numerator = stod(input_vec[ref.bid - 1]) * stod(input_vec[ref.asksize - 1]) +
						stod(input_vec[ref.ask - 1]) * stod(input_vec[ref.bidsize - 1]);
	//find (AskSize+BidSize)
	out_obj.denominator = stod(input_vec[ref.asksize - 1]) + stod(input_vec[ref.bidsize - 1]);

	map<string, Output>::iterator out_itr;
	//Search for the ticker if there is an entry already. If already present we update the
	//Output object with new values of min, max, max timestamp difference and formula
	out_itr = out.find(input_vec[ref.ticker - 1]);
	if (out_itr != out.end())
	{
		out_obj.sum_numerator = out_obj.numerator + out_itr->second.sum_numerator;
		out_obj.sum_denominator = out_obj.denominator + out_itr->second.sum_denominator;
		out_obj.div_sumnr_sumdr = out_obj.sum_numerator / out_obj.sum_denominator;
	}
	else
	{
		out_obj.sum_numerator = out_obj.numerator;
		out_obj.sum_denominator = out_obj.denominator;
		out_obj.div_sumnr_sumdr = out_obj.sum_numerator / out_obj.sum_denominator;
	}
	//out_obj.div_sumnr_sumdr = out_obj.sum_numerator / out_obj.sum_denominator;

	//return out_obj.div_sumnr_sumdr;

}