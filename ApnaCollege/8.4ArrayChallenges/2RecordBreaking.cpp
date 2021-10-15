#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

//Record Breaking:
//Condn 1: greater than all previous elements
//Condn 2: grreater than next/following element
//Both 1st and last day could be record breaking

int main()
{
    system("cls");int n;
    cin>>n;
    int ar[n];int maxi=INT32_MIN;
    bool condn1=1,condn2=0;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    // Cond1 = ar[i] > loop from 0 to i-1

    int recordb=0;
    ar[n]=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>maxi)
        {
            condn1=1;
        }
        else{condn1=0;}
        maxi=max(maxi,ar[i]);



        if(ar[i]>ar[i+1])
        {
            condn2=1;
        }

        if(condn1==1 && condn2==1)
        {
            cout<<endl<<"ar["<<i<<"]="<<ar[i];
            recordb++;
        }
    }
    cout<<endl<<recordb<<" days are RecordBreaking";

    return 0;


}