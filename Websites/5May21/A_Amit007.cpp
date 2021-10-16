#include<bits/stdc++.h>
#define ll          long long
#define ld 			long double
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define in(a)        insert(a)
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
using namespace std;
static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
					    	// freopen("input.txt", "r", stdin);
							// freopen("output.txt", "w", stdout);
void removeDuplicates(string &S)
{
    char prev = '\0';
    for (auto it = S.begin(); it != S.end(); it++)
    {
        if (prev == *it)
        {
            S.erase(it);
            it--;
        }
        else {
            prev = *it;
        }
    }
}
 
void solve()
{
	int flag = 0 ; 
	ll n ; cin >> n ;
	string s ; cin >> s ;
	removeDuplicates(s) ;
	map<char,int> m ;
	for(int i = 0 ; i< s.size() ; i++){
		m[s[i]]++ ;
	}
	for(auto it : m ){
		if(it.S >=2) {
			flag = 1 ;
		}
	}
	if(flag == 1) cout << "NO"<< endl ;
	else cout << "YES" << endl ;
} 
 
 
signed main()
{
   ios
 ll test ;
cin >> test ; 
 while(test--)
  solve();
 
}