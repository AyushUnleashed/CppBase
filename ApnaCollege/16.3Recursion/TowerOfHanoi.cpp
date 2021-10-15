#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
void tOH(int n,int s,int d,int h)
{   
    if(n==1)
    {   count++;
        cout<<endl<<"Disk moved from"<<s<<" to"<<d;
        return;
    }

    tOH(n-1,s,h,d);
    tOH(1,s,d,h);
    tOH(n-1,h,d,s);
}

int main()
{
    system("cls");
    int n=3; 
    int s=1,d=2,h=3;
    tOH(n,s,d,h);
    cout<<endl<<"Total Steps:"<<count;
    return 0;
}