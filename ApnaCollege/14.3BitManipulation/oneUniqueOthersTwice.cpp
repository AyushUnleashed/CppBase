//find the unique no.s form others which are all double
//XOR give Zero for Same bits

//XOR give zero for same xorSumber;
// XOR give unique no. for (unique ^ Zero)
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    { cin>>arr[i]; }

    bool found=false;
    int xorSum=0;   //  so first sum give first element of array    

    for(int i=0;i<n;i++)
    {   
        xorSum = xorSum ^ arr[i]; 
    }

    cout<<"\nUnique number is:"<<xorSum;
    return 0;

}