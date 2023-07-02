#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
const int N=10e5+10;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        
        ll ans1=((i*i)*(i*i-1))/2;
        ll ans2=4*(i-1)*(i-2);
        ll final=ans1-ans2;
        cout<<final<<endl;

    }
    

}