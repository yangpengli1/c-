#include <iostream>
#include <string>
using namespace std;
class print {
public:
	print(int a);
private:
	char term[4][10] = { "Spring","Summer","Fall","Winter" };
};
print::print(int a)
{
	cout << term[a] << endl;
}
int main()
{
	int a;
	cin >> a;
	print m(a - 1);
	return 0;
}