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
    vector<ll>num;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        num.push_back(x);
    }
    sort(all(num));
     auto it=unique(all(num));
    num.resize(distance(num.begin(),it));
    cout<<num.size()<<endl;


}