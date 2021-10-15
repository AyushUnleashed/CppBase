#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int invertedN= ~n;
    int ans;
    int v2=0;

    for(int i=0;i<=log2(n);i++)
    {
        v2=v2^(1<<i);
    }

    ans = invertedN & v2;


    cout<<endl<<ans;
    return 0;
}