#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

void printVector(vector <int> v)
{   //v.size() -> o(1);
    cout<<"\nvector size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {   //similar to array
        cout<<v[i]<<" ";
    }
}

int main()
{
    system("cls");
    vector <int> v;
    int n;
    cin>>n;
    for(int  i=0;i<n;i++)
    {   
        printVector(v); 
        int input;
        cin>>input;
        
        // adding element to last of vector;
        v.push_back(input); // O(1);
    }
    printVector(v);
}