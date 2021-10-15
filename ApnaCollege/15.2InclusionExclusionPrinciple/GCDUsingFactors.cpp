//not using prime factors;
#include<iostream>
#include<conio.h>
#include<math.h>
#include<vector>
using namespace std;

// o( n ^ 2 ) complexity
//failed due to tle


vector<int> factorise(int n)
{
    vector<int> factors;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factors.push_back(i);
        }
    }
    return factors;
}



int giveGCD(vector<int> &factors1,vector<int> &factors2)
{
    int gcd=0;
    for(int i=0;i<factors1.size();i++)
    {
        for(int j=0;j<factors2.size();j++)
        {
            if(factors1[i]==factors2[j])
            {
                if(factors1[i]>gcd)
                {gcd=factors1[i];}
            }
        }
    }
    return gcd;
}

void printVect(vector<int> &vecto)
{
    for(int i=0;i<vecto.size();i++)
    {
        cout<<vecto[i]<<" ";   
    }

}

int main()
{
    system("cls");
    int n1,n2;
    cin>>n1>>n2;

    vector<int> factors1 =factorise(n1);
    vector<int> factors2 =factorise(n2);

    cout<<"\nFactors 1:\n";
    printVect(factors1);

    cout<<"\nFactors 2:\n";
    printVect(factors2);
    int gcd = giveGCD(factors1,factors2);
    cout<<"\n\nHCF of "<<n1<<" and "<<n2<<" is:"<<gcd;

    return 0;
}