#include<iostream>
#include<string>
using namespace std;

//Program to print all substrings of given string
//Recursion
void subSet(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return; 
    }

subSet(input.substr(1),output); //nhi liya
subSet(input.substr(1),output+input[0]);//liya hai

int intInput = input[0];
string ans = to_string(intInput);
subSet(input.substr(1),output+ans);//liya hai again
}

int main()  
{
    system("cls");  
    string s;
    cin>>s;
    subSet(s,"");
    return 0;
}

