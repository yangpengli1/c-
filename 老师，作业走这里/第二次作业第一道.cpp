#include <iostream>
using namespace std;
class yanghuisanjiao {
public:
	void print(int);
};
void yanghuisanjiao::print(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == 0)
			{
				cout << "1";
				break;
			}
			else
			{
				int c = 1;
				if (j)
				{
					for (int n = 1; n <= j; n++)
					{
						c = c * (i - n + 1) / n;
					}
					cout << c << " ";
				}
			}
			if (j == 0)
				cout << "1 ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	yanghuisanjiao x;
	x.print(n);
	return 0;
}