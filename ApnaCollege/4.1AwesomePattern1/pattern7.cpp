//Butterfly Pattern
#include<iostream>
#include<stdlib.h>
using namespace std;

//Tip: 1 row is made by only one loop
// think till which position we have to put space, from where digits or * 

//My code
int main()
{   system("cls");
     int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    //TOP 2 Triangles, Total length 2n
    for(int i=1;i<=n;i++)
    {   
        
            for(int j=1;j<2*n;j++)
            {
             if(j<=i || j>=2*n-i)
                cout<<"*";
                else
                {
                cout<<" ";
                }
            
            }
        cout<<endl;
        
        
    }


    //Bottom 2 triangles
    for(int i=n;i>0;i--)

    {   for(int j=1;j<2*n;j++)
            {
             if(j<=i || j>=2*n-i)
                cout<<"*";
                else
                {
                cout<<" ";
                }
            
            }
        cout<<endl;
        
        
    }




    return 0;
}


//Mam code
/*
int main()
{
     int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {cout<<"*";}

        int space = 2*n- 2*i;

        for(int j=1;j<=space;j++)
        {cout<<" ";}

        for(int j=1;j<=i;j++)
        {cout<<"*";}

        cout<<endl;
    
        
    }

     for(int i=n;i>0;i--)
    {   
        for(int j=1;j<=i;j++)
        {cout<<"*";}

        int space = 2*n- 2*i;

        for(int j=1;j<=space;j++)
        {cout<<" ";}
        
        for(int j=1;j<=i;j++)
        {cout<<"*";}

        cout<<endl;
    
        
    }

     



    return 0;
}
*/