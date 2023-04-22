#include <iostream>
#include<string>
using namespace std;
class student {
public:
	student(string a, float b, float c) ;
private:
	string name;
	float usual;
	float final;
};
student::student(string a, float b, float c) :usual(b), name(a), final(c)
{
	cout << a;
	 printf("% .2f % .2f % .2f\n",b,c,0.4*b+0.6*c);
}
int main()
{
	for (int n = 0; n < 100; n++)
	{
		string name;
		float b, c;
		cin >> name >> b >> c;
		student  yang(name,b,c);
	}
	return 0;
}