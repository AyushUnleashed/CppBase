#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    bool found=0;
    int n,start,end,sum=0,S;
    cin>>n;
    int arr[n];
    //Enter array
    cout<<"\nEnter Array:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fflush(stdin);
    cout<<"\n Enter S:";
    cin>>S;

    cout<<"\n";
    //Code to solve;

    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
            if(sum==S)
            {
                found=1;
                start=i;end=j;
                goto HERE;
            }
        }
        cout<<endl;
    }

    HERE:

    if(found==1)
    {
        cout<<"\n\nFound it";
        cout<<"\nStart index: "<<start<<" End index: "<<end<<endl;

        for(int i=start;i<=end;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"=>"<<S;
    }
    else{
        cout<<"\nNot found ,failed";
    }


    return 0;
}