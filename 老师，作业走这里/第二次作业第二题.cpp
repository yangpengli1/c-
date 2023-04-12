#include <iostream>
using namespace std;
class print{
public:
	print(int n);
};
print::print(int n)
{
	int a[5]={0};
	for (int i = 4; i >= 0; i--, n = n / 8)
	{
		a[i] = n % 8;
	}
	for (int i = 0; i <= 4; i++)
		cout << a[i];
}
int main()
{
	int n;
	cin >> n;
	print x(n);
	return 0;
}