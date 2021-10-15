#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;



int main()
{
    system("cls");
    int n;
    cin>>n;
    bool isPowerOf4=true;

    int count=0;
    if(n==1)
    {
        isPowerOf4=false;
    }
    
    if( (n>1) && ( ((n) & (n-1))==0))
    {
        while(n>1)
            {   n=n>>1;
                count++;
            }
            
            if(count%2==0)
            {
                isPowerOf4=true;
            }
            else
            {
                isPowerOf4=false;
            }
    }
    else
    {
        isPowerOf4=false;
    }

    if(isPowerOf4==true)
    {
        cout<<"yes its power of 4";
    }
    else{
        cout<<"\nNo";
    }
    
        
    //code to check power of 2
    //power of 2 , eg:2,4,6,8,16 have only 1 bit as 1 other are zero

    return 0;
}