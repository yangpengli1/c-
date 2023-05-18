#include<iostream>
using namespace std;
int pows(int x, int n)
{
	int i = 0, j = 1;
	for (i = 0; i < n; i++)
		j = j * x;
	return j;
}
int main()
{
	int x, n;
	cin >> x;
	getchar();
	cin >> n;
	cout << pows(x, n);
	return 0;
}