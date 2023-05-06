#include <iostream>
using namespace std;
class found {
public:
	void Max(int n, int m);
	void Min(int n, int m);
private:
	int max, min;
};
void found::Max(int n, int m)
{
	if (n > m)
	{
		max = n;
		min = m;
	}
	else
	{
		max = m;
		min = n;
	}
	for (; min % m != 0 || max % m != 0; m--);
	cout << m << " ";
}
void found::Min(int n, int m)
{
	for (; n % max != 0 || n % min != 0; n++);
	cout << n << endl;
}
int main()
{
	int n, m;
	cin >> n >> m;
	found x;
	x.Max(n, m);
	x.Min(n, m);
	return 0;
}