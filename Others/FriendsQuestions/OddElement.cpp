#include<iostream>
#include<conio.h>
//Anurag sir Codeforces
using namespace std;

int main()
{
    system("cls"); int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    
    //code to implement -ve elements => -elementLimit to 0 to +elementLimit in array of elements , totalSize=2*elementLimit+1;
    int elementLimit =1000;
    int elementSize=(2*elementLimit)+1;
    int elements[elementSize];
    bool printed=false; //to not repeating printing of  same element;

    //index=elementLimit+arr[i]; index of each element in 

    //setting each element to zero  //we will count how many times an element has occured,intitally zero
    for(int i=0;i<elementSize;i++)
    {
        elements[i]=0;
    }

    //Enter elementss
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //code to increase no. of times element ocurr by 1 
    //traversing array and increasing no. of times element has occured
    for(int i=0;i<n;i++)
    {
        elements[elementLimit+arr[i]]+=1;
    }

    // if element comes one time then it is diff. element otherwise its same element
    for(int i=0;i<n;i++)
    {
        if(elements[elementLimit+arr[i]]==1)
        {
            cout<<"\nThis is diff element"<<arr[i];
        }
        else if(elements[elementLimit+arr[i]]>1 && printed==false)
        {
            cout<<"\nThis is same element"<<arr[i];
            printed=true;
        }
    }

    return 0;
}