//¿Õ¸ñÌæ»»
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