#include <iostream>

using namespace std;

int main ()
{
    long long int n, m, a;
    cin>>n>>m>>a;
    long long int x = n*m;
    long long int y = a*a;
    long long int tiles;
    
    if(x == a)
    {
        tiles = 1;
    }
    else if(a>n && a>m)
    {
        tiles = 1;
    }
    else
    {
        long long int k1, k2, l1, l2;
        k1 = n/a;
        k2 = n%a;
        l1 = m/a;
        l2 = m%a;
        int count1= 0;
        int count2 =0;

        if(k2!=0)
        {
            count1 = 1;
        }
        if (l2!=0)
        {
            count2 = 1;
        }

        tiles = (count1+k1)*(count2+l1);
        
    }
cout<<tiles<<endl;
    
    return 0;
}