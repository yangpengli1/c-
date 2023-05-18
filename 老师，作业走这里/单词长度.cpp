#include<iostream>
using namespace std;
int main()
{
	char word[47];
	for (;;)
	{
		int k;
		cin >> word;
		for (k = 0; word[k] != '\0'; k++);
		if (word[k - 1] == '.')
		{
			cout << k - 1;
			break;
		}
		else cout << k<<" ";
	}
	return 0;
}