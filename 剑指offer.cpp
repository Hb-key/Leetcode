//2
class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (str == NUll || length <= 0)
			return;
		int i = 0;
		int blank = 0;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				blank++;
				i++;
			}
		}
		int j = i + 2 * blank;
		while (blank)
		{
			if (str[i] != ' ')
			{
				str[j] = str[i];
				i--;
				j--;
			}
			else
			{
				str[j] = '0';
				str[--j] = '2';
				str[--j] = '%';
				i--;
				j--;
				blank--;
			}
		}
	}
};