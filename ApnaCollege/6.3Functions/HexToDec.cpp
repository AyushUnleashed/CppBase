#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
// #include<bits/stdc++.h> -> header file for every header file  
using namespace std;

int HexaToDec(string hexadecimal)
{
    int x; // x is used to store individual character of hexadecimal no. 
    int length=hexadecimal.size(); // hexadecimal.size() -> give size of string hexadecimal;
    int ans=0;                      //ans ->decimal no.
    int p=length-1; //p is used for managing power 
    
    //loop to multiply individual character of hexadecimal to power of 16 and sum it up in variable ans

    for(int i=0;hexadecimal[i]!='\0';i++)  
    {   
        //to store integer terms
        if(hexadecimal[i]>='0' && hexadecimal[i]<='9')
        {
            x=(hexadecimal[i]-'0');
            
        }   //converting character to digits eg: A->10
        else if(hexadecimal[i]>='A' && hexadecimal[i]<='F')
        {
            x=( (hexadecimal[i]-'A')+10);
        }
        
        ans=ans+x*pow(16,p); 
        p--; 
        
    }

    return ans;

}


int main()
{   
    int decimal;
    system("cls");
    string hexadecimal; // used string because hexadecimal consist of character
    cout<<"Enter HexaDecimal number :";
    cin>>hexadecimal;
    decimal=HexaToDec(hexadecimal);
    cout<<"\nDecimal no. is:"<<decimal;
    return 0;
}