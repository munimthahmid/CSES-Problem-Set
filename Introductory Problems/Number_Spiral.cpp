#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
const int N=10e5+10;
typedef long long int ll;
ll find_first_value(ll value,bool row, bool col)
{
    ll first_value=1;
    // get the original position (just adding 1 with the index)
    value++;
    if(col)
    {
        if(value%2==0)
        first_value=value*value-2*value+2; // i calculated and find the pattern that
                                           // for even indices it follows x^2-2x+2 eqn
                         
                                      //and for odd indices i just have to minus 1
        else
        {
            value++;
            first_value=value*value-2*value+2-1;

        }

    }
    if(row)
    {
        if(value%2!=0)
        first_value=value*value-2*value+2; 
        else
        {
            value++;
            first_value=value*value-2*value+2-1;

        }
    }
    return first_value;


}

int main()
{
  
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        ll other;
        ll value=max(x,y);
        bool even=false;
        bool odd=false;
        if(value%2==0) even=true;
        else odd=true;
        bool row=false;
        bool col=false;
        if(value==x) 
        {
            row=true;
            other=y;
        }
        else
        {
             col=true;
             other=x;
        }
        ll first_value;
        first_value=find_first_value(value,row,col);
        ll increment=0;
        if(row && even ) increment=1;
        if(row && odd) increment=-1;
        if(col && even) increment=-1;
        if(col && odd) increment=1;

        first_value+=increment*other;
        
        cout<<first_value<<endl;


        


    }




}