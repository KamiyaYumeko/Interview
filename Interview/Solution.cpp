#include "Solution.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
	const auto length = nums.size();

	for (unsigned i = 0; i < length - 1; ++i)
	{
		for (auto j = i + 1; j < length; ++j)
		{
			if (nums.at(i) + nums.at(j) == target)
			{
				return { static_cast<int>(i), static_cast<int>(j) };
			}
		}
	}

	return {};
}

int Solution::reverse(int x)
{
	int res = 0;
	while (x != 0)
	{
		int pop = x % 10;
		x /= 10;
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && pop > 7))
		{
			return 0;
		}
		if (res < INT_MIN / 10 || (res == INT_MIN / 10 && pop < -8))
		{
			return 0;
		}
		res = res * 10 + pop;
	}
	return res;
}

bool Solution::isPalindrome(int x)
{
	if (x < 0 || 0 == x % 10 && x != 0)
	{
		return false;
	}
	int res = 0;
	while (x > res)
	{
		res = res * 10 + x % 10;
		x /= 10;
	}
	return x == res || x == res / 10;
	
	/*if(x<0)
	{
		return false;
	}
	else
	{
		unsigned i = x;
		unsigned m = 0;
		while (i > 0)
		{
			m = m * 10 + i % 10;
			i /= 10;
		}
		return m == x;

	}*/
}

int Solution::maxSubArray(std::vector<int>& nums)
{
	int sum = 0;
	int max = INT_MIN;
	for (int i = 0; i < nums.size(); ++i)
	{
		sum = nums[i];
		if (sum > max)
		{
			max = sum;
		}
		for (int j = i + 1; j < nums.size(); ++j)
		{
			sum += nums[j];
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	return max;
}
