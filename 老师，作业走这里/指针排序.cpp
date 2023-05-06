#include<iostream>
using namespace std;
int sort(int num[], int n)
{
	for(int i=0;i<n;i++)
		for (int j = 0; j < n - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				int temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	int num[100];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num, n);
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}