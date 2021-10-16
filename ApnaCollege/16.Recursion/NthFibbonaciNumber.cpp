#include<iostream>
// #include<conio.h>
using namespace std;
//actually print all numbers
int main()
{
    int n;
    cin>>n;
    int secondPrev=0;
    int Prev=1;
    cout<<secondPrev<<" "<<Prev<<" ";

    int sum = secondPrev+Prev;
    for(int i=3;i<=n;i++)
    {
        cout<<sum<<" ";
        secondPrev=Prev;
        Prev=sum;
        sum=secondPrev+Prev;
    }
    return 0;
}
