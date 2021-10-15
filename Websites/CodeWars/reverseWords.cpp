//Program to reverse words whose length is >=5;

#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;

string spinWords(string &str);
int main()
{
    system("cls");
    string input;
    cout<<"\n Input de:";
    cin>>input;
    cout<<spinWords(input);

    return 0;
}

string spinWords(string &str)
{ 
  int len=str.length();
  int start=0;
  char c;
  int counter=0;
  
  for(int i=0;i<len;i++)
  { 
    
    if(str[i]==' ' && counter>=5)
    {
        for(int i=start;i<(counter/2);i++)
        {
            char c=str[i];
            str[i]=str[counter-i-1];
            str[counter-i-1]=c;
            
        }
        counter=0;
        start=counter+1;
    }
    else if(str[i]= ' ')
    {
      counter=0;
      start=counter+1;
    }
    else
    {
      counter++;
    }
  }
  return str;
}// spinWords