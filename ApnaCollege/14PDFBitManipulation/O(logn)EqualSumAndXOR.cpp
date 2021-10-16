#include<iostream>
#include<conio.h>
using namespace std;
//Compute XOR from 1 to n (direct method)

/*
(n+i)=(n^i)+2*(n&i)
- for n+i == n ^i , n&i==0
- n&i=0 when all unset bits of zero combine with bits of i.
- for n&i==0, n must have bit→0 while i can have oth 0
- therfore total =  2*2*2*2.... x times, x= no. of unset(0) bits
*/

//n&i==0
int countValues (int n)
{ 
        int unsetBits=0;
        while(n>0)
        {
            if( (n&1)==0)
            {
                unsetBits++;
            }
        }
    
//    return pow(2,unsetBits);
    return 1<<unsetBits;
}
 
 int main()
{
    system("cls");
    int n;
    cin>>n;
    int ans=countValues(n);
    cout<<ans;
}
