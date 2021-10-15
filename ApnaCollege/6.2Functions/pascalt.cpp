#include<iostream>
#include<conio.h>
#include<math.h>

int Comb(int,int);
int fact(int);

using namespace std;

//Program to print pattern;
int pat(int n)
{   //cout<<"1"<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<Comb(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{   
    system("cls");
    int n;  
    cout<<"Enter no. of steps:";
    cin>>n;
    //n=n-1;
    pat(n);

    return 0;
}

//Program to print factorial;
int fact(int num)
{
    int f=1;
    
    while(num>0)
    {
        f=f*num;
        num--;
    }

    return f;
}


//Program to print combination;
int Comb(int n,int r)
{   int comb,deno;
    deno=n-r;
    comb= fact(n)/(fact(deno)*fact(r));
    return comb;
}

