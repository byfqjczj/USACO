/*
ID: byfqjcz1
LANG: C++
TASK: ride
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    string x,y;
    cin >> x;
    cin >> y;
    int length1 = x.length();
    int length2 = y.length();
    int holder1,holder2;
    holder1 = 1;
    holder2 = 1;
    for (int i=0;i<length1;i++)
    {
        int convert = x[i]-64;
        holder1 = holder1 * convert;
    }
    for (int i=0;i<length2;i++)
    {
        int convert = y[i]-64;
        holder2 = holder2 * convert;
    }
    holder1 = holder1%47;
    holder2 = holder2%47;
    if(holder1==holder2)
    {
        cout << "GO"<<endl;
    }
    else
    {
        cout << "STAY"<<endl;
    }
}