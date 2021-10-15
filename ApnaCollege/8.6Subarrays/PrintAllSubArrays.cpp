#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    //Enter Array
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    cout<<"All the Subarrays are: "<<endl;

    //Code to print all Subarrays

   for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=k;j<n-i;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;

}