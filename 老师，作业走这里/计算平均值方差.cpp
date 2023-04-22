#include <iostream>
using namespace std;
class find1 {
public:
	find1(int a, int b,int c,int d,int e,int f);
private:
	int average, S = 0;
};
find1::find1(int a, int b, int c, int d, int e, int f)
{
	average = (a + b + c + d + e + f) / 6;
	for (int n = 1; n <= 6; n++)
	{
		int x;
		if (n == 1)
			x = a;
		if (n == 2)
			x = b;
		if (n == 3)
			x = c;
		if (n == 4)
			x = d;
		if (n == 5)
			x = e;
		if (n == 6)
			x = f;
		S = (x - average) * (x - average) / 6 + S;
	}
	cout << average << S << endl;
}
int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	find1 o(a, b, c, d, e, f);
	return 0;
}