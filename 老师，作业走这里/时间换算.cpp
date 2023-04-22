#include <iostream>
using namespace std;
class findtime {
public:
	findtime(int a);
private:
	int BJT, UTC;
};
findtime::findtime(int a) :BJT(a)
{
	if (a / 100 - 8 < 0)
		UTC = (a / 100 - 8 + 24) * 100 + a % 100;
	else UTC = (a / 100 - 8) * 100 + a % 100;
	cout << UTC<<endl;
}
int main()
{
	int a;
	cin >> a;
	findtime x(a);
	return 0;
}