#include<iostream>
using namespace std;
int mystrstr(char a[], char b[])
{
	int i = 0, j = 0,k,n;
	for(n=0;a[n]!='\0';n++)
	for(;i<n;i++)
	{
		for (; a[i] != b[0]; i++);
		k = i;
		for (; b[j] == a[i]; j++, i++);
		if (b[j] == '\0')
			return k;
		else i++;
	}
	return -1;
}
int main()
{
	char a[500], b[500];
	cin >> a;
	cin >> b;
	cout << mystrstr(a, b);
	return 0;
}