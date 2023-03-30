#include <iostream>
using namespace std;
class x {
public:
	int a;
	int max(int a)
	{
		int b;
		b = a % 10 + a % 100 / 10 + a / 100;
		cout << b << endl;
		return b;
	}
};
int main()
{
	int a;
	cin >> a ;
	x X;
	X.max(a);
	return 0;
}