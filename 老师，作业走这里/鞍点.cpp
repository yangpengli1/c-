#include <iostream>
using namespace std;
class andian {
public:
	andian(int a[100][100],int n);
};
andian::andian(int a[100][100],int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int flag = 1;
			for (int m = 0; m < n; m++)
			{
				if (a[i][j] > a[m][j])
					flag = 0;
				if (a[i][j] < a[i][m])
					flag = 0;
			}
			if (flag)
			{
				cout << i << " " << j << " ";
				count++;
			}
		}
	}
	if (count == 0)
		cout << "NO";
}
int main()
{
	int n;
	int a[100][100];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	andian x(a,n);
	return 0;
}