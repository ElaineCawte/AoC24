#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

namespace Common {
		ifstream ReadFile(string filename);
		bool IsBiggerThanComparitor(int a, int b);
		vector<int> ParseListToInt(string list);
}