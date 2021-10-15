#include<iostream>
#include<conio.h>
using namespace std;

// 10 = 5* 2; ,total trailing zeros is min(total 5,2);

// since number of 5 is always no. of 2's , no, of 5's is equal to trailing zeros

int trailingZeroes(int N)
{   
    //int count2=0;
    int count5=0,count10=0;
    int virtualN;
    //converting to nearest multiple of 5
    int rem =N%5;
    N=N-rem;

    while(N>1)
    {
        if(N%5==0)
        {
            virtualN=N;
            while(virtualN %5 == 0 )
            {
                count5++;
                virtualN/=5;
            }
        }
        N=N-5;
    }
    //count10 = min(count5,count2); 
    count10=count5;
    return count10;
}
int main()
{
    system("cls");
    int n;
    cin>>n;
    int noOfTrailingZeroes = trailingZeroes(n);
    cout<<endl<<noOfTrailingZeroes;
}