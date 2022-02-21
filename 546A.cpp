#include<iostream>

using namespace std;

#define ll long long

int main()
{
    ll k, n, w;

    cin>>k>>n>>w;

    ll total_cost = 0;

    for(int i=1; i<=w; i++)
    {
        total_cost = total_cost + (i*k);
    }

    ll borrow;

    if(total_cost>n)
    {
        borrow = total_cost - n;
    }
    else
    {
        borrow = 0;
    }

    cout<<borrow;
    return 0;
}