/*
ID: byfqjcz1
LANG: C++
TASK: friday
*/
#include <iostream>
using namespace std;
int main () {
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int years;
    cin >> years;
    int weekdays[7];
    for (int i=0;i<7;i++)
    {
        weekdays[i]=0;
    }
    int daytracker = 4;
    bool leap = false;
    for (int i=0;i<years;i++)
    {
        leap = false;
        if ((i+1900)%4==0)
        {
            leap = true;
        }
        if ((i+1900)%100==0)
        {
            leap = false;
        }
        if ((i+1900)%400==0)
        {
            leap = true;
        }
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        if (leap==true)
        {
            daytracker=(daytracker+29)%7;
            weekdays[daytracker]++;
        }
        else
        {
            daytracker=(daytracker+28)%7;
            weekdays[daytracker]++;
        }
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+30)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+30)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+30)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+31)%7;
        weekdays[daytracker]++;
        daytracker=(daytracker+30)%7;
        weekdays[daytracker]++;
    }
    for(int i=0;i<7;i++)
    {
        if(i<6)
        {
            cout<<weekdays[i] << " ";
        }
        else
        {
            cout<<weekdays[i] <<endl;
        }
    }
}