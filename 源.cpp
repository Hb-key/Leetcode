//1.两数之和
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> result(2, -1);
//		for (int i = 0; i<nums.size(); i++)
//			for (int j = i + 1; j<nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					result[0] = i;
//					result[1] = j;
//					return result;
//				}
//			}
//	}
//};

//7.整数反转
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int reverse(int x) {
	int ret = 0;
	while (x)
	{
		ret = 10 * ret + x % 10;
		x = x / 10;
	}
	if (x <(-2 ^ 31) || x >(2 ^ 31 - 1))
	{
		return 0;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = reverse(n);
	printf("%d\n", ret);
	return 0;
}