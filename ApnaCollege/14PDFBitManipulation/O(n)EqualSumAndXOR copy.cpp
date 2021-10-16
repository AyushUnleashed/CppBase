#include<iostream>
#include<conio.h>
using namespace std;
//Compute XOR from 1 to n (direct method)


int countValues (int n)
{   int count=0;
  for(int i=0;i<n;i++)
  { 
      if(n+i == (n^i))
      {
          count++;
      }
  }
  return count;
}
 
 int main()
{
    system("cls");
    int n;
    cin>>n;
    int ans=countValues(n);
}
