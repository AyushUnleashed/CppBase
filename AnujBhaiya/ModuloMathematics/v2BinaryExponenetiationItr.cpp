//iterative binary exponentiation
#include<iostream>
using namespace std;

int binExpItr(long  a,long  b,long n)
{
    // a ki power badate jaao
    // agar binary number me set bit ho toh add that power
    // otherwise don't
    // we left shift to check other powers
    // eg: 3^13 = 3^(8+4+0+1) = 3^(1101)(binary)
    // we use b as binary 
    long res=1;
    while(b>0)   
    {
        if((b&1)!=0)    //if  0th bit is 1
        {
            res=((res%n) * (a%n))%n; 
        }
        a =((a%n) * (a%n))%n; //increasing power
        b=b>>1; //divide by 2 or right shift
    }
    return res;
}

int main()
{   system("cls");
    cout<<binExpItr(5222323,5,1000000007);
}