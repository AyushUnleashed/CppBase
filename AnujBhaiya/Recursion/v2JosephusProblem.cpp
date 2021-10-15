#include<iostream>
using namespace std;

//indexing from 1
// in circle of n people kill the kth person


//shift elements to the right.s
int josephusSurvivor(int n,int k,int s,int arr[])
{
    if(n==1)//returning the orignal position of last survivor
    {
        return arr[0];//orignal index stored inside array
    }
    s=s+k; //index of survivor
    s=s%n;  
    /*when it reaches end of array revert it to start of aray*/

   /*remove elemnt at index s
    or killing the kth person*/

    for(int i=s;i+1<n;i++) //shifting elements to the left 
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]= -1; //since size is reduced

    //repeat it again for n-1;
    josephusSurvivor(n-1,k,s,arr);
}

int main()
{
    system("cls");
    int n,k;
    cin>>n>>k;
    int arr[n];
    k--;  /* har step me k-1 ka difference hoga toh
    baar baar likhne ki jagah yahi likh diya
    eg: at index 0 (k=7) so, 0+(7-1) , 6th index */


    //array stores the correct position from orignal circle
    // for a circle of n=7 , 1 to 7
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    cout<<"\n"<<josephusSurvivor(n,k,0,arr);

    return 0;
}

