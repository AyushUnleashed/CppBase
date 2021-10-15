#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int N=5;
    int A[N]; int B[N]; 
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<"\nMaxElement:"<<*max_element(A,A+N);
    cout<<"\nIndex:"<<distance(A, max_element(A,A+N));
    return 0;
}