#include<iostream>
using namespace std;
int main()
{
	char number[8][4];
	char word[8];
	int i = 0, j = 0, n = 0;
	for (; i < 8; i++)
	{
		if (i + 2 != 7 && i + 2 != 9)
			for (j = 0; j < 3; j++)
			{
				number[i][j] = 'A' + n;
				n++;
			}
		else for (j = 0; j < 4; j++)
		{
			number[i][j] = 'A' + n;
			n++;
		}
	}
	cin >> word;
	for (n = 0; n < 7; n++)
	{
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if (word[n] == number[i][j])
				{
					cout << i + 2;
					break;
				}
			}
		}
	}
	return 0;
}