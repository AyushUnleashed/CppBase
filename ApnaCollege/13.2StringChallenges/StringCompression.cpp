#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cin>>str;
    bool charMap[26];

    //setting map to false // true->character occured and viceversa 
    for(int i=0;i<26;i++)
    {
        charMap[i]=false;
    }   


    for(int i=0;i<str.length();i++)
    {   
        if(charMap[str[i]-26] == true)
        {   
            cout<<endl<<str[i]<<" removed";
            str.erase(i,1);     //removing element of current index
            i--;        //need to reduce because we removed element from i th index, so need to check new i th element 
        }
        else
        {   cout<<"\nFirst "<<str[i]<<" occured";

            charMap[str[i]-26] = true;      //setting flag to true  so from next index start removing element if repeated 

            if(i>0 )    //i>0 becaue -1 index is invalid
            {charMap[str[i-1]-26] = false;} //for non consecutive character case 
           

        }
    }

    cout<<endl<<endl<<"String Afterwards:"<<str;
    return 0;
}