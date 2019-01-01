//1.��ά�����еĲ���
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.size() < 0)
			return false;
		int i = 0;
		int j = array[0].size() - 1;
		while (j >= 0 && i < array.size())
		{
			if (target == array[i][j])
				return true;
			else if (target > array[i][j])
				i++;
			else if (target < array[i][j])
				j--;
		}
		return false;
	}
};
//2.�ո��滻
class Solution {
public:
	void replaceSpace(char *str, int length) {
		int blank = 0;
		for (int i = 0; i < length; i++)
		{
			if (str[i] == ' ')
				blank++;
		}
		int j = length + blank * 2 - 1;
		for (int i = length - 1; i >= 0; i--)
		{
			if (str[i] == ' ')
			{
				str[j--] = '0';
				str[j--] = '2';
				str[j--] = '%';
			}
			else
			{
				str[j--] = str[i];
			}
		}
	}
};