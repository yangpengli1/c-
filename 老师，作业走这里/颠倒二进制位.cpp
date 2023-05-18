#include<iostream>
using namespace std;
int main()
{
	char number[33];
	int k;
	cin >> number;
	for (k = 0; number[k] != '\0'; k++);
	k = k - 1;
	for (int i = 0; i <= k / 2; i++)
	{
		int temp;
		temp = number[i];
		number[i] = number[k - i];
		number[k - i] = temp;
	}
	cout << number;
	return 0;
}