#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

void setBit(int &num,int posn)
{
    int check = 1<< posn;   //changing bit to given posn using left shift
    // if if already has bit 1 then okay otherwise set  bit to 1 (we used bitwise or aif anyone has  1 , it will become 1)
    num = (num | check); // changing num;
}

int main()
{
    int uniqueNumber=0;
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    int hashMap[64];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nSetting hashmap to zero";
    for(int i=0;i<64;i++)
    {   
        hashMap[i]=0;
    }
    
    cout<<"\nFilling bits in hashmap";
    for(int i=0;i<n;i++)
    {   
        int num=arr[i];
        //code to get indexes of 1 of any number;
        //vector<int> indexes;
        int index=0;
        while (num>0)
        {
            if( (num & 1 )!=0)    //if bit is 1
            {   cout<<"\nBit is 1 at index:"<<index<<" of number:"<<arr[i];
                //indexes.push_back(index);
                hashMap[index]++;
            }
            
            num=num>>1;
            index++;
        }
    }

    cout<<"\nconstructing unique number from indexes";
    //vector<int> numIndexes;
    for(int i=0;i<64;i++)
    {   
        if(hashMap[i]%3==0)
        {
            //do nothing 
        }
        else
        {   
            cout<<"\nuniqueNumber has bit 1 at index:"<<i;
            setBit(uniqueNumber,i);
           // numIndexes.push_back(i);
        }
    }

    cout<<endl<<"\nuniqueNumber:"<<uniqueNumber;
    cout<<endl<<"Time Complexity: nLog(n)";
    return 0;
}
