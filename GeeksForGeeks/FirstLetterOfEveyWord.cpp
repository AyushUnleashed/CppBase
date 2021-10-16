#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    char str2[100];
    getline(cin,str);
    int j=0;
    for(int i=0;i<str.length();i++)
    {   
        if(i==0)
        {
            
            str2[j] = str[i];
            j++;
            
        }
        else{
            if(str[i-1]==' ')
            {
                
                str2[j] = str[i];
                j++;
            }
        }
        

    }

    cout<<"\nStr2:"<<str2;
    return 0;
}