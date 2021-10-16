//Failed


//Program to print all subsets of given set
//Algorithm
//if element present its posn is 1 else if absent its represented by 0
// integer to hold = 2 ki power n;
// from 0 -> 2^n -1 we can represent all combinations(total 2^n Sets)
//input set in a string 
//subset in another string 
// use check bit to see if particular element is present
//if present add to empty subset string and finally print subset
//loop for n bits // 0th  -> (n-1)th  bit posn


#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    system("cls");

    string primarySet;
    cin>>primarySet;

    int n=primarySet.length();

    string subSet;
    
   for(int i=0;i<n;i++)
   {
       subSet[i]=' ';
   } 

    int total = pow(2,n);   //total no. of sets

    for(int i=0; i < total; i++)
    {   
        //check bit
        int num=i;
        //cout<<"\nnum:"<<num;
        for(int j=0;j<n;j++)
        {  
            //cout<<endl;
            int mask= 1<<j;
            //cout<<"\tmask:"<<mask;
            if((num & mask)!=0)
            {    //cout<<"It works";
                //its 1 //element exist
                //if element exist add it to substring

                subSet[j] = primarySet[j];

                //cout<<"  \tsubset[j]: "<<subSet[j];
            }
            else {    subSet[j]=' ';}
        }
        cout<<"\nsubset["<<i<<"]:"<<subSet;
    }
    return 0;
}
