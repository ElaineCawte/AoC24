#pragma once

#include "/AoC24/Advent of Code/Common/CommonCode.h"
#include <algorithm>
#include <ranges>

#include <vector>
//#include "/AoC24/Advent of Code/Common/CommonCode.cpp"

using namespace Common;

void Part1()
{
	string output;
	ifstream file = Common::ReadFile((string)"Day1");
	vector<int> vecleft;
	vector<int> vecright;
	while (getline(file, output))
	{
		size_t delimiter = output.find(" ");
		string rightint;
		string leftint;

		for (size_t i = 0; i < delimiter; i++)
		{
			rightint.push_back(output[i]);
		}
		for (size_t i = delimiter; i < output.length(); i++)
		{
			if (output[i] != ' ')
				leftint.push_back(output[i]);
		}
		vecleft.push_back(atoi(leftint.c_str()));
		vecright.push_back(atoi(rightint.c_str()));

		cout << output << "\n";
	}

	sort(vecleft.begin(), vecleft.end());
	sort(vecright.begin(), vecright.end());

	size_t score = 0;
	for (size_t i = 0; i < vecleft.size(); i++)
	{
		if (vecleft[i] > vecright[i])
			score = score + (vecleft[i] - vecright[i]);
		else
			score = score + (vecright[i] - vecleft[i]);
	}

	printf("%i", score);
}

void Part2()
{
	string output;
	ifstream file = Common::ReadFile((string)"Day1");
	vector<int> vecleft;
	vector<int> vecright;
	while (getline(file, output))
	{
		size_t delimiter = output.find(" ");
		string rightint;
		string leftint;

		for (size_t i = 0; i < delimiter; i++)
		{
			rightint.push_back(output[i]);
		}
		for (size_t i = delimiter; i < output.length(); i++)
		{
			if (output[i] != ' ')
				leftint.push_back(output[i]);
		}
		vecleft.push_back(atoi(leftint.c_str()));
		vecright.push_back(atoi(rightint.c_str()));
	}

	size_t score = 0;

	for (size_t i = 0; i < vecleft.size(); i++)
	{
		size_t countofvalue = 0;
		for (size_t x = 0; x < vecright.size(); x++)
		{
			if (vecright[x] == vecleft[i])
				countofvalue++;
		}

		score = score + (vecleft[i] * countofvalue);
	}

	printf("%i",score);
}


int main()
{

	//Part1();

	Part2();

	return 0;
}
