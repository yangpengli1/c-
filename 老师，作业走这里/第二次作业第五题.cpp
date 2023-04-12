#include <iostream>
using namespace std;
class print {
public:
	print(int a, int b);
};
print::print(int a, int b)
{
	char x[1000] = { '0'};
	int i;
	char y[17] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	for (i = 0; a != 0; i++, a = a / b)
	{
		x[i] = y[a % b];
	}
	for (i = i - 1; i >= 0; i--)
		cout << x[i];
}
int main()
{		
	int a, b;
	cin >> a >> b;
	print x(a, b);
	cout << endl;
	return 0;
}