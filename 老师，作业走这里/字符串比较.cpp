#include<iostream>
#include<string>
using namespace std;
void findchar(char str1[], char str2[],int n,int m)
{
	int i = 0, j, flag = 1, count = 0;
	while(i<m)
	{
		int k;
		for (; str1[0] != str2[i]&&i<m; i++);
		for (j = 0, k = i; j < n; j++, k++)
		{
			if (str1[j] != str2[k])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cout << i << " ";
			count++;
		}
		flag = 1;
		i++;
	}
	if (count == 0)
		cout << "-1";
}
int main()
{
	char str1[10000], str2[10000];
	int n, m;
	for (n = 0;; n++)
	{
		scanf_s("%c", &str1[n]);
		if (str1[n] == '\n')
			break;
	}
	for (m = 0;; m++)
	{
		scanf_s("%c", &str2[m]);
		if (str2[m] == '\n')
			break;
	}
	findchar(str1, str2, n, m);
	return 0;
}