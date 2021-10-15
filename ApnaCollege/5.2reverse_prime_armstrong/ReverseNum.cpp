#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   system("cls");
    int num,rev=0,lastdigit=0,onum;

    cout<<"Enter num:";
    cin>>num;
    onum=num;
    
    while(num>0)
    {   lastdigit = num%10;
        rev = rev*10 + lastdigit;
        num=num/10;
    }

    cout<<"\nNumber:"<<onum<<"\nReverse:"<<rev;
    return 0;

}
