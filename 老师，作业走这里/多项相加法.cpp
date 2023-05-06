/*#include <iostream>
using namespace std;
int main()
{
	int a[101] = { 0 }, x, y, i;
	for (int i = 0;; i++)
	{
		cin >> x >> y;
		a[x] = a[x] + y;
		if (x == 0)
			break;
	}
	for (int i = 0;; i++)
	{
		cin >> x >> y;
		a[x] = a[x] + y;
		if (x == 0)
			break;
	}
	for (i = 100; a[i] == 0; i--);
	for (; i > 0; i--)
		if (a[i] != 0)
			cout << a[i] << "x" << i << "+";
	cout << a[0];
	return 0;
}*/