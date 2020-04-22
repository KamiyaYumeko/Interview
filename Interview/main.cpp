#include "Solution.h"
#include <iostream>

using namespace std;

int main()
{
	// 1. 两数之和
	vector<int> nums = { 3,2,3 };
	Solution solution;
	auto n= solution.twoSum(nums, 6);	
	for (int i = 0; i < n.size(); ++i)
	{
		cout << n[i]<<endl;
	}
	return 0;
}
