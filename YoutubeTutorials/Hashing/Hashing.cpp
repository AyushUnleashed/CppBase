#include<iostream>
#include<conio.h>
using namespace std;

//Hashing -> index i , 0 +ve
// index i , 1 -ve values
//O(n)
//Program to search given element by hashing
// Values in array (-Max to +Max) Rule

int main()
{   int maxSize=100; //hashTable => -100 to +100 values
    system("cls");
    int hashTable[2][maxSize+1];    // 0 index 
    int searchVar;
    bool found=false;

    int falVal=-maxSize-5; 
    cin>>searchVar;

    //code to set even +ve and odd -ve in table
    for(int i=0;i<maxSize;i++)
    {
        if(i%2==0)
        {
            hashTable[0][i]=i;  // 0,2,4,6,8,10
            hashTable[1][i]=falVal;
        }
        else
        {
            hashTable[1][i]=i;  //-1,-3,-5,-7,-9
            hashTable[0][i]=falVal;
        }
    }

    //hashing
    {
        if(searchVar>=0)
        {
            if(hashTable[0][searchVar]!=falVal)
            {   found=true;
                cout<<"Found it:"<<hashTable[0][searchVar];
            }
        }
        else
        {   searchVar= -searchVar;  //converting to +ve  
            if(hashTable[1][searchVar]!=falVal)
            {   found=true;
                cout<<"Found it:"<<-hashTable[1][searchVar];
            }
        }

        if(found==false)
        {
            cout<<"\nNot Found";
        }
    }
    return 0;
}
