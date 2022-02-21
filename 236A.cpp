#include<iostream>

using namespace std;

void swaping(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int *a,int *b,int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            swaping(&a[j],&a[j+1]);
            swaping(&b[j],&b[j+1]);
        }
    }
 
}
}

int main()
{
    int t;
    cin>>t;

    int n, k;

    int a[n];
    int b[n];

    int mem_lft;
    
    for(int i =0; i<t; i++)
    {
        cin>>n>>k;
        mem_lft=k;
        for(int e =0; e<n; e++)
        {
            cin>>a[e];
        }

        for(int f =0; f<n; f++)
        {
            cin>>b[f];
        }

        sort(a, b, n);

        for(int p=0; p<n; p++)
        {
            cout<<a[p]<<" ";
        }
        for(int o=0; o<n; o++)
        {
            cout<<b[o]<<" ";
        }


        // for(int q=0; q<n; q++)
        // {
        //     if(k>=a[q])
        //     {
        //         mem_lft = mem_lft + b[q];
        //         k = k + b[q];
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // cout<<mem_lft<<endl;
    }
    return 0;
}