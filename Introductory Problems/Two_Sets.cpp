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
   ll sum=(n*(n+1))/2;
   vector<bool>visited(n+1,false);
   if(sum%2!=0)
   {
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
    ll count=n;
    ll true_counter=0;
    sum/=2;
    while(true)
    {
        sum-=count;
        visited[count]=true;
        true_counter++;
        count--;
        if(sum<=count && sum<=n)
        {
            if(sum==0) break;
            if(visited[sum]==false)
            {
                visited[sum]=true;
                true_counter++;
                break;
            }
        }

    }
    cout<<true_counter<<endl;
    for(ll i=1;i<visited.size();i++)
    {
        if(visited[i]==true) cout<<i<<" ";
    }
    cout<<endl;
    cout<<n-true_counter<<endl;
     for(ll i=1;i<visited.size();i++)
    {
        if(visited[i]!=true) cout<<i<<" ";
    }

   }


}