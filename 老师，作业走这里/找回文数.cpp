#include <iostream>
using namespace std;
class findhuiwenshu {
public:
	findhuiwenshu(int m, int k);
};
findhuiwenshu::findhuiwenshu(int m, int k)
{
	int i, j, a[100], count = 0;
	for (i = m + 1; count < k; i++)
	{
		int flag = 1;
		int z = i;
		for (j = 0; z != 0; z = z / 10, j++)
		{
			a[j] = z % 10;
		}
		for (int n = j - 1; n >= 0; n--)
			if (a[n] != a[j - 1 - n])
				flag = 0;
		if (flag)
		{
			for (int n = 0; n < j; n++)
				cout << a[n];
			cout << " ";
			count++;
		}
	}
}
int main()
{
	int N, m, k;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> m >> k;
		findhuiwenshu x(m, k);
		cout << endl;
	}
	return 0;
}