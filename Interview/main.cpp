#include "Solution.h"
#include <iostream>

using namespace std;

int main()
{
	Solution solution;
	
	// 1. 两数之和
	//vector<int> nums = { 3,2,3 };
	//auto n= solution.twoSum(nums, 6);	
	//for (int i = 0; i < n.size(); ++i)
	//{
	//	cout << n[i]<<endl;
	//}

	// 7. 整数反转
	//cout << solution.reverse(100000);

	// 9.回文数
	//cout << solution.isPalindrome(1221);

	// 53.最大子序和
	std::vector<int> nums = { 5,0,1 };
	cout << solution.maxSubArray(nums);
	
	return 0;
}
