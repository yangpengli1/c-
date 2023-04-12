#include <iostream>
using namespace std;
class findday {
public:
    findday(int year, int month, int day);
};
findday::findday(int year, int month, int day)
{
    int i;
    int days = 0;
    char  w[7][100] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    for (i = 1900; i != year; i++)
    {
        if ((i % 100 != 0 && i % 4 == 0) || i % 400 == 0)
            days = days + 366;
        else days = days + 365;
    }
    for (i = 0; i < month - 1; i++)
    {
        if ((year % 100 != 0 && year % 4 == 0 && i == 1) || year % 400 == 0)
            days = days + a[i] + 1;
        else days = days + a[i];
    }
    days = day + days - 1;
    cout << w[days % 7] << endl;
}
int main()
{
    int y, m, d;
    cin >> y;
    getchar();
    cin >> m;
    getchar();
    cin >> d ;
    findday x(y,m,d);
    return 0;
}
