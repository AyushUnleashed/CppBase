//no letter come twice
#include<iostream>
#include<conio.h>
using namespace std;

//size= 1000;
int main()
{
    system("cls");
    string str;
    cin>>str;
    int n = 26; //0 - 26 a to  z ( 97 )
    bool isRepeated[n]; //1000
    bool isIsogram=true;
    
    for(int i=0;i<n;i++)
    {
        isRepeated[i] = false;
    }

    for(int i=0;i<str.length();i++)
    {   
        int cr=str[i]-97;
        if(isRepeated[cr]==true)    //agar repeat hogya toh isogram nhi h
        {
            isIsogram = false;
            break;        
        }
        else if ( isRepeated[cr]==false)
        {
            isRepeated[cr]=true;
            
        }
    }

    if(isIsogram==true)
    {
        cout<<"\nIt is Isogram";
    }
    else
    {
        cout<<"\n Not an Isogram";
    }

return 0;
    
}
