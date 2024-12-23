#pragma once

#include "/AoC24/Advent of Code/Common/CommonCode.h"

namespace Common {

	ifstream Common::ReadFile(string filename)
	{
		return ifstream("../inputs/" + filename + ".txt");
	}

	bool Common::IsBiggerThanComparitor(int a, int b) {
		return a > b;
	}
	vector<int> ParseListToInt(string list)
	{
		vector<int> vec;
		string anumber;
		for (size_t i=0; i <= list.length(); i++)
		{
			if (isdigit(list[i]))
				anumber.push_back(list[i]);
			else {
				vec.push_back(atoi(anumber.c_str()));
				anumber.clear();
			}
		}

		return vec;
	}
}