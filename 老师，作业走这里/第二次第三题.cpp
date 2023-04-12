#include <iostream>
using namespace std;
class print {
public:
	print(int a,int b);
};
print::print(int a,int b)
{
	int x[14] = { 0 };
	int i;
	for (i = 0; a != 0; i++, a = a / b)
	{
		x[i] = a % b;
	}
	for (i = i - 1; i >= 0; i--)
		cout << x[i];
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int a, b;
		cin >> a >> b;
		print x(a, b);
		cout << endl;
	}
	return 0;
}