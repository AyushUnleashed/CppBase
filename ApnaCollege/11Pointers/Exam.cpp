#include<iostream>
#include<conio.h>
using namespace std;
//input and output of array using pointers
int main()
{
    system("cls");
    int n;
    cout<<"Size:";
    cin>>n;
    int arr[n];
    int *arrPtr;
    int sum=0; float mean;
    arrPtr=arr;

    cout<<"\nEnter array:";
    //with another pointer
    for(int i=0;i<n;i++)
    {
        cin>>*arrPtr;
        arrPtr++;

    }
    cout<<endl;
    // //without another pointer
    // arrPtr=arr;
    // for(int i=0;i<n;i++)
    // {   
    //     cout<<*(arr+i)<<" ";    //arr+i would give next index because arr is indexing pointer , +i eill work for all datatypes
    // }
    arrPtr=arr;
      for(int i=0;i<n;i++)
    {
        sum=sum+*arrPtr;
        cout<<*arrPtr<<" ";
        arrPtr++;

    }
    mean=sum/n;

    cout<<"\nSum is:"<<sum;
    cout<<"\nMean is:"<<mean;

    return 0;

}