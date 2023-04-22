#include <iostream>
#include <string>
using namespace std;
class age {
public:
	age(int a);
private:
	char name[6][20] = {"Children","Teenagers","Youth","middle-aged","Elderly","Old man"};
};
age::age(int a)
{
	int x;
	x = (a - 1) / 10;
	if (x == 0)
		x = 0;
	if (x == 1)
		x = 1;
	if (x == 2 || x == 3)
		x = 2;
	if (x == 4)
		x = 3;
	if (x == 5 || x == 6 || x == 7)
		x = 4;
	if (x == 8 || x == 9)
		x = 5;
	cout << name[x] << endl;
}
int main()
{
	int a;
	cin >> a;
	age m(a);
	return 0;
}
