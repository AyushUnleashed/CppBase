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
        //sqrt(n)*sqrt(n) = n or  x * y = n, if x is bigger than sqrt(n) then y must have occured by now 
        // which would have been smaller than x
        //eg: n=10 , sqrt(n) = 3.x , 10=2*5 , before 5 comes 2 already came , which is less than sqrt
        // no need to go furthur till 5 , if 2 already came condition would have been done by now.
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