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
