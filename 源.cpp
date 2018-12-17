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
//
//int reverse(int x) {
//	int ret = 0;
//	while (x)
//	{
//		ret = 10 * ret + x % 10;
//		x = x / 10;
//	}
//	if (x <(-2 ^ 31) || x >(2 ^ 31 - 1))
//	{
//		return 0;
//	}
//	return ret;
//}

//9.回文数
class Solution {
public:
	bool isPalindrome(int x) {
		String tempX = String.valueOf(x);
		if (x < 0)
		{
			return false;
		}
		else
			if (x > 0)
			{
				int i = 0;
				int j = tempX.length() - 1;
				if (i == j)
				{
					return true;
				}
				while (i != j)
				{
					if (i == j + 1)
					{
						break;
					}
					else if (tempX.charAt(i) == tempX.charAt(j))
					{
						i++;
						j--;
					}
					else
					{
						break;
					}
				}
				if (i == j || i>j)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else {
				return true;
			}
	}
};
