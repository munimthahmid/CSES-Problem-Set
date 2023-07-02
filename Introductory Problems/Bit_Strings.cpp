#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
typedef long long int ll;
 ll M=1e9+7;
int main()
{
    ll n;
    cin>>n;
    ll ans=1;
    for(int i=0;i<n;i++)
    {
        ans=(ans*2)%M;
    }
    cout<<ans<<endl;
    

}