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
	if(x<0)
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

	}
}
