#include<iostream>
using namespace std;
class X {
public:
	void count(int a[], int n)
	{
		int i = 0, flag;
		for (i = 0; i < n; i++)
		{
			flag = 1;
			int count1 = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				if (a[j] == a[i])
					flag = 0;
			}
			if (flag)
			{
				for (int j = i + 1; j < n; j++)
					if (a[i] == a[j])
						count1++;
			}
			if (count1 == 1)
				cout << a[i] << " ";
		}
	}
};
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	X x;
	x.count(a, n);
	return 0;
}
