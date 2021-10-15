#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
// we can run loop till sqrt of n and we will find no. out  
int main()
{   system("cls");
    int num,i;
    bool flag =0;
    cout<<"Enter number:";
    cin>>num;
    for( i=2; i<=sqrt(num); i++)
    {   if(num%i==0)
        {
            cout<<"non prime";
            flag=1;
            break;
        }
        //for prime no. i becomes num in the end and test case becomes false thats why loop doesn't execute 
    }

    if(flag==0)
    {
        cout<<"Prime";
    }

    return 0;
}