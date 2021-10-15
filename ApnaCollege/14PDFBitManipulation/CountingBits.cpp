//Leet code

//Program to cocunt number of ones in a given number
#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    int n;
    int countOne;
    cin>>n;
    int oN=n;

    vector<int> arr;

    //since num & (num-1) -> give all bits same as num
    //expect the right most set bit(1) it turn from(1 -> 0)
    //therefore in every iteration we loose right most set bit
    //and we count it , till num  becomes zero


    for(int i=0;i<=n;i++)
    {   countOne=0;
        int index=i;

        while(index>0)
        {
            index = ( index & (index-1) );    
            countOne++;
        }

        arr.push_back(countOne);
    }

    cout<<"\nVector:\n";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}