#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

//Max of an array
int main()
{
    system("cls");
    int n,i,j,k;
    cin>>n;
    int ar[n],sum=0;
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        
    }

    for(i=0;i<n;i++)
    {   
        sum=0;  //not to carry sum from last loop
        for(j=i;j<n;j++)
        {
            sum=sum+ar[j];
            cout<<"\t"<<"sum:"<<sum;
        }
        cout<<endl;
    }

    return 0;
}
