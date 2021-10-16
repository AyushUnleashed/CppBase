#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    bool found=0;
    int n,S,currSum=0;;
    cin>>n;
    int arr[n];
    int start=0,end=0;
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
    while(currSum<=S && end<n)
    {
        currSum+=arr[end];
        end++;

        if(currSum==S)
        {
            cout<<"\n1st Loop Sum:"<<currSum<<endl;
            found=1;
            break;
        }
    }

if(found!=1)
{
    while(currSum>=S && start<n)
    {
        currSum=currSum-arr[start];
        start++;

         if(currSum==S)
        {   
            
            cout<<"\n2nd Loop Sum:"<<currSum<<endl;
            found=1;
            break;
        }

    }
}


if(found==1)
{   cout<<"found it";
    cout<<"\n"<<start<<" "<<end-1<<"\n";
    for(int i=(start);i<=(end-1);i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

}
else
{
    cout<<"Nhi mila Bhai Sorry";
}

    return 0;
}