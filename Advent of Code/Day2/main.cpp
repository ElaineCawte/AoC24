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
	ifstream file = Common::ReadFile((string)"Day2");
	size_t score = 0;
	while (getline(file, output))
	{
		auto vec = ParseListToInt(output);
		bool increasing;
		if (vec[0] > vec[1])
			increasing = false;
		else
			increasing = true;

		bool safe = true;
		for (size_t i = 0; i < vec.size()-1; i++)
		{
			if (increasing) {
				//printf("%i" , vec[i + 1] - vec[i]);
				if (vec[i + 1] - vec[i] > 3 || vec[i + 1] - vec[i] < 1)
				{
					safe = false;
					break;
				}
			}
			else
			{
				if (vec[i] - vec[i + 1] > 3 || vec[i] - vec[i + 1] < 1)
				{
					safe = false;
					break;
				}
			}

		}
		if(safe)
			score++;
	}


	printf("%i", score);
}

void Part2()
{
	string output;
	ifstream file = Common::ReadFile((string)"Day2");
	size_t score = 0;
	while (getline(file, output))
	{
		auto vec = ParseListToInt(output);
		bool increasing;
		if (vec[0] > vec[1])
			increasing = false;
		else
			increasing = true;

		int errorcount = 0;
		for (size_t i = 0; i < vec.size() - 1; i++)
		{
			if (increasing) {
				//printf("%i" , vec[i + 1] - vec[i]);
				if (vec[i + 1] - vec[i] > 3 || 
					vec[i + 1] - vec[i] < 1)
				{
					errorcount++;
				}
			}
			else
			{
				if (vec[i] - vec[i + 1] > 3 || 
					vec[i] - vec[i + 1] < 1)
				{
					errorcount++;
				}
			}
		}
		if (errorcount - 1 == 0)
			score++;
	}


	printf("%i", score);
}


int main()
{

	Part1();

	printf("\n");
	Part2();

	return 0;
}
