#include<bits/stdc++.h>
using namespace std;

int main()
{
	// int t;
	// cin>>t;
	// while(t>0)
	// {
		int n;
		cin>>n;
		char str[n];
		cin>>str;
		bool isCharDone=false;
		bool hasCharOccured;
		string ans;
		if(n==1)
		{
			//no need to be suspicious
			ans = "YES";
			cout<<ans<<endl;
			//continue;
		}

		for(int i=0;i<n;i++)
		{
			if(isCharDone==true)
			{
				//Teacher get suspicious
				ans="NO";
				break;
			}	
			if(ans=="NO")
			{
				break;
			}

			if(isCharDone==false)
			{
				if(hasCharOccured==false)
				{
					//first time occuring
					hasCharOccured=true;
					//DoNothing
				}
				else
				{
					if(str[i+1]!=str[i])
					{
						isCharDone=true;
					}
				}
			}
		}

		if(ans=="NO")
		{
			cout<<ans<<endl;
			//continue;
		}
		
	// }
	// t--;
}
 