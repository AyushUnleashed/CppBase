#include<iostream>
using namespace std;


// 2x n board place tile of 2x1 , find total number of tiles

//only 2 ways to place , 
//Horizontally -> reduce to n-2;
//vertically -> reuce to n-1;

//both 2 ways are possible so we will do sum;

int totalWaysOfTlies(int n)
{
//base case
  if(n==1)
  {
    return 1;
  }

  if(n==0)
  {
    return 0;
  }

  int verticalCount =  totalWaysOfTlies(n-1);
  int horizontalCount =  totalWaysOfTlies(n-2);

  return verticalCount+horizontalCount;


}


int main()
{
    int n;
    cin>>n;
    cout<<"Total ways to place tiles"<<totalWaysOfTlies(n);
}