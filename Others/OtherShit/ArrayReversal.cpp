// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin>>N;
// 	int  A[N];
// 	for(int i=0;i<N;i++)
// 	{
// 	    cin>>A[i];
// 	}
	
// 	for(int i=0;i<N/2;i++)
// 	{
// 	    int temp=A[i];
// 	    A[i]=A[N-i-1];
// 	    A[N-i-1]=temp;
// 	}
	
// 	for(int i=0;i<N;i++)
// 	{
// 	    cout<<A[i];
// 	}
	
// 	return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--)
    {   int N; 
        cin>>N;
	int  A[N];
	
	for(int i=0;i<N;i++)
	{
	    cin>>A[i];
	}
		
	for(int i=N-1;i>=0;i--)
	{
	    cout<<A[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}



