#include <iostream>
using namespace std;
class grade {
public:
	grade(int a);
private:
	char level[5] = { 'A','B','C','D','E' };
};
grade::grade(int a)
{
	int x = a / 10;
	if (x < 6)
		x = 4;
	if (x == 6)
		x = 3;
	if (x == 7)
		x = 2;
	if (x == 8)
		x = 1;
	if (x >= 9)
		x = 0;
	cout << level[x] << endl;
}
int main()
{ 
	int a;
	cin >> a;
	grade m(a);
	return 0;
}