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
    ll fives=0;
    ll temp=n;
    while(temp!=0)
    {
        fives+=temp/5;
        temp=temp/5;
    }
    cout<<fives<<endl;





    }
