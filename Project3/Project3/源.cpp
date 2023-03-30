
#include <stdio.h>
#include <string.h>
int compare(char b[], char a[], int i, int k)
{
	int n = 0, count = 0, m, flag;
	while (n < i)
	{
		flag = 1;
		for (; b[n] != a[0] && n <= i; n++);
		if (n >= i)
			break;
		for (m = 0; b[n] >= 'a' && b[n] <= 'z' && m < k; m++, n++)
		{
			if (b[n] != a[m] || ((b[n + 1] < 'a' || b[n + 1] > 'z') && a[m + 1] >= 'a' && a[m + 1] <= 'z') || ((a[m + 1] < 'a' || a[m + 1] > 'z') && b[n + 1] >= 'a' && b[n + 1] <= 'z'))
				flag = 0;
			if (n > 0 && b[n - 1] < 'a' || b[n - 1] > 'z')
				flag = 0;
		}

		if (flag)
			count++;
	}
	return count;
}
int main()
{
	char ch, sentence[10000], a[100], maxstr[100];
	int i = 0, j = 0, count, k, max = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			sentence[i] = ch + 32;
		else sentence[i] = ch;
		i++;
	}
	sentence[i] = '\0';
	for (; j < strlen(sentence); j++)
	{
		for (k = 0;; j++, k++)
		{
			{
				char b[100];
				if (sentence[j] >= 'a' && sentence[j] <= 'z')
					b[k] = sentence[j];
				else if (sentence[j] >= 'A' && sentence[j] <= 'Z')
					b[k] = sentence[j] + 32;
				else {
					b[k] = '\0';
					strcpy(a, b);
					break;
				}
			}
		}
		count = compare(sentence, a, i, k);
		if (count > max)
		{
			strcpy(maxstr, a);
			max = count;
		}
		if (count == max)
		{
			if (strcmp(a, maxstr) > 0)
				strcpy(maxstr, a);
		}
	}
	printf("%s %d", maxstr, max);
	return 0;
}