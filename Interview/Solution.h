#pragma once
#include <vector>

class Solution
{
public:
	// 1. 两数之和
	std::vector<int> twoSum(std::vector<int>& nums, int target);
	// 7. 整数反转
	int reverse(int x);
	// 9. 回文数
	bool isPalindrome(int x);
	// 53. 最大子序和
	int maxSubArray(std::vector<int>& nums);
};

