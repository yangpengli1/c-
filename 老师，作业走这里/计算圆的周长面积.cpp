#include <iostream>
using namespace std;
class circle {
public:
	int r;
	void D();
	void C();
	void S();
};
void circle::D()
{
	cout << "直径=" << 2 * r << endl;
}
void circle::C()
{
	cout << "周长="<<2 * 3.14 * r << endl;
}
void circle::S()
{
	cout << "面积="<<3.14 * r * r << endl;
}
int main()
{
	int r;
	cin >> r;
	circle A;
	A.r = r;
	A.D();
	A.C();
	A.S();
	return 0;
}