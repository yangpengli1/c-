/*#include <iostream>
using namespace std;
class division {
public:
	division(int n, int m);
};
division::division(int n, int m)
{
	cout << "0.";
	for (int i = 0; i < 200; i++)
	{
		cout << n * 10 / m;
		n = n * 10 % m;
	}
}
int main()
{
	int n, m;
	cin >> n;
	getchar();
	cin >> m;
	division x(n, m);
	return 0;
}*/