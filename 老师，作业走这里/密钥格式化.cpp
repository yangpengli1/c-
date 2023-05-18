#include <iostream>
using namespace std;
class key {
public:
	key(char S[], int k);
};
key::key(char S[], int k)
{
	char S1[100];
	int j = 0;
	int m = 0, n;
	int count = 1;
	for (n = 0; S[n] > 0 && S[n] < 256; n++, m++)
		if (S[n] == '-')
			m--;
	for (int i = 0; i<=n; i++)
	{
		if (j != m % k && j + 1 != count * k + count || j == 0)
		{
			if (S[i] != '-')
			{
				if (S[i] >= 'a' && S[i] <= 'z')
					S1[j] = S[i] + 'A' - 'a';
				else S1[j] = S[i];
				j++;
			}
		}
		else
		{
			if(j<=m)
			S1[j] = '-';
			count++;
			i--;
			j++;
		}
	}
	for (int j = 0; S1[j] > 0 && S1[j] < 256; j++)
		cout << S1[j];
}
int main()
{
	char S[100];
	cin >> S;
	int k;
	cin >> k;
	key x(S,k);
	return 0;
}