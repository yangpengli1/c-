/*#include <iostream>
using namespace std;
class add1 {
public:
	void add(int n);
	int even(int n);
private:
	int sum = 0;
};
int add1::even(int n)
{
	if (n % 2 != 0)
		return 0;
	
	else 
	{
		if (n == 0)
			cout << sum << endl;
		return 1;
	}
	
}
void add1::add(int n)
{
	if (even(n) == 0)
		sum = sum + n;
}
int main()
{
	int n;
	add1 x;
	for(n = 1; n > 0;)
	{
		cin >> n;
		x.add(n);
	}
	return 0;
}*/