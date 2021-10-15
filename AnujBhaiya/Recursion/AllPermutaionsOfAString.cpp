#include<iostream>
using namespace std;

void pString(string input)
{

    int n=input.length();
    if(n==0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {   string temp = input;
        cout<<temp[i];
        temp.erase(i,1);
        pString(temp);
   }
   cout<<endl;

}

int main()
{
    system("cls");
    string input;
    cin>>input;
    cout<<endl<<endl;
    pString(input);
    return 0;

}