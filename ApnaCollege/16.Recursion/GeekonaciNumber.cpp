#include<iostream>
// #include<conio.h>
using namespace std;

int geeko(int A,int B,int C,int N)
{
    if(N==4)
    {
        return (A+B+C);
    }
    if(N==5)
    {
        return (B+C+geeko(A,B,C,4));
    }
    if(N==6)
    {
        return (C + geeko(A,B,C,4)+geeko(A,B,C,5));
    }
    int  smallOutput1 =geeko(A,B,C,N-1);
    int  smallOutput2 =geeko(A,B,C,N-2);
    int  smallOutput3 =geeko(A,B,C,N-3);

    int prevSum=smallOutput1+smallOutput2+smallOutput3;
    return prevSum;
}

int main()
{   //system("cls");
    int T; int A,B,C,N;
    cin>>T;

    while(T>0)    
    {
        cin>>A;cin>>B;
        cin>>C;cin>>N;
        cout<<geeko(A,B,C,N)<<endl;
        T--;
    }
    return 0;
}