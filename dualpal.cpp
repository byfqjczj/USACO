/*
ID: byfqjczj1
PROG: dualpal
LANG: C++
*/
#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int BaseTransform(int x, int b)
{
    int newbase;
    int randomnum=1;
    while(true)
    {
        int a = x%b;
        newbase=newbase+randomnum*a;
        randomnum=10*randomnum;
        x = x/b;
        if(x/b==0)
        {
            break;
        }
    }
}
bool PalindromeCheck(int x)
{
    int numberlen = to_string(x).length();
    int xD = numberlen-1;
    int lmfao = 0;
    string BRUHMOMENT = to_string(x);
    for (int i=0;i<numberlen/2;i++)
    {
        if(BRUHMOMENT[i]!=BRUHMOMENT[xD-i])
        {
            lmfao = 1;
            break;
        }
    }
    if(lmfao==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
freopen("dualpal.in", "r", stdin);
freopen("dualpal.out", "w", stdout);
int x,y;
cin >> x>>y;
int counter = y+1;
int arrayofpalindromes[x];
for(int i=0;i<x;i++)
    {
    while(true)
    {
        arrayofpalindromes[i]=counter;
        counter++;
        int asdf = 0;
        for(int j=2;j<=10;j++)
        {
            int holder1 = BaseTransform(arrayofpalindromes[i],j);
            if (PalindromeCheck(holder1)==true)
            {
                asdf=asdf+1;
            }
        }
        if(asdf >= 2)
        {
            break;
        }
    }
    }
for(int i=0;i<x;i++)
    {
    cout << arrayofpalindromes[i]<< endl;
    }
}