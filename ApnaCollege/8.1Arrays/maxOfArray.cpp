#include<iostream>
#include<conio.h>
#include<limits>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    long l,s;
    int n;
    l=INT32_MIN; //large no. is set to minimum so that every no. is bigger than this
    s=INT32_MAX; //smaller no. is set to maximum so that every no. is smaller than this

    cout<<"Enter size of array:";
    cin>>n;
    long ar[n];

    //Enter array
    cout<<"\nEnter array:";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    //show array
    cout<<"\nArray is:";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

    //logic to find max and min elemnet
    
    for(int i=0;i<n;i++)
    {
        l= max(l,ar[i]);
        s= min(s,ar[i]);
    }

    cout<<"\nMAximum no. is:"<<l;
    cout<<"\nMinimum no. is:"<<s;

    return 0;

}