#include<iostream>
#include<conio.h>
#include<strings.h>
#include<limits.h>
using namespace std;

int main()
{   
    system("cls");
    int n,largest=INT32_MIN;

    cout<<"\nEnter no. of kids:";
    cin>>n;
    int candies[n],extraCandies;
    bool result[n];

    cout<<"Enter candies for kids: ";

    for(int i=0;i<n;i++)
    {
        cin>>candies[i];
    }

    cout<<"Enter extraCandies:";
    cin>>extraCandies;

    for(int i=0;i<n;i++)
    {
        if(candies[i]>largest)
        {   
            largest=candies[i];
        }
    }

    // to get ans if that kid can have greatest no. of candies
    for(int i=0;i<n;i++)
    {   
        int p=candies[i]+extraCandies;
        
        if(p>=largest)
        {
            result[i]=true;
        }
        else if(p<largest)
        {result[i]=false;}
    }

    cout<<"\nCandies for kids:\n ";

    for(int i=0;i<n;i++)
    {
        cout<<candies[i]<<" ";
    }

    cout<<"\nTruth value for Highest Candies:\n ";
    cout<<std::boolalpha;   
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}