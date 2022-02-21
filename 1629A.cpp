#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int k, n;

    for(int i = 0; i<t; i++)
    {
        cin>>n;
        cin>>k;

        vector<pair<int, int> > v(n);
        for(int j =0; j<n; j++)
        {
            cin>>v[j].first;
        }
        for(int k =0; k<n; k++)
        {
            cin>>v[k].second;
        }

        sort(v.begin(), v.end());

        for(int p=0; p<n; p++)
        {
            if(v[p].first<=k)
            {
                k = k + v[p].second;
            }
            else
            {
                break;
            }
        }
        cout<<k;
    }
}