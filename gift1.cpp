/*
ID: byfqjcz1
LANG: C++
TASK: gift1
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct person {
    string name;
    int money;
};
int main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    int peoplenumber;
    cin >> peoplenumber;
    person personalrecords[peoplenumber];
    for (int i=0;i<peoplenumber;i++)
    {
        cin >> personalrecords[i].name;
    }
     for (int j=0;j<peoplenumber;j++)
    {
        personalrecords[j].money=0;
    }
    int counter = 0;
    while (counter<peoplenumber)
    {
        string x;
        cin >> x;
        int alabama=0;
        for (int a=0;a<peoplenumber;a++)
        {
            if(personalrecords[a].name==x)
            {
                alabama=a;
            }
        }
        int num1,num2;
        cin >> num1 >> num2;
        personalrecords[alabama].money-=num1;
        if (num2!=0)
        {
            personalrecords[alabama].money+=num1%num2;
        }
        for(int b=0;b<num2;b++)
        {
            string randomstring;
            cin >> randomstring;
            int findname=0;
            for (int c=0;c<peoplenumber;c++)
            {
                if(personalrecords[c].name==randomstring)
                {
                    findname=c;
                }
            }
            if (num2!=0)
            {
                personalrecords[findname].money+=((num1-num1%num2)/num2);
            }
        }
        counter++;
    }
    for(int i=0;i<peoplenumber;i++)
    {
        cout<<personalrecords[i].name<<" "<<personalrecords[i].money<<endl;
    }
}