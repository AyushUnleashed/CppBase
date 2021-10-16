#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Time complexity => O(n* root(n))

int main()
{   int a,b,i;
    cin>>a>>b;
    for(int num=a;num<=b;num++)
    {
        for( i=2;i<sqrt(num);i++)
        {
            if(num%i==0)
            {
                break;
            
            }
            
        }
        if(i>sqrt(num))
            {
                cout<<"Prime no:"<<num<<endl;
            }
    }
    return 0;
}