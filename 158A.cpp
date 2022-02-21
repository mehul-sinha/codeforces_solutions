#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int count = 0;
    int pass;
    int new_k = k;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int passing_marks = a[k-1];

    if (a[0] == 0)
    {
        pass = 0;
        cout<<pass<<endl;
        return 0;
    }

    for (int x = 1 ; x<k; x++)
    {
        if(a[k-x]==0)
        {
            passing_marks = a[k-x-1];
            new_k = k-x;
        }
    }

    if(new_k==k){
    for(int j=k; j<n; j++)
    {
        if(a[k-1]==a[j])
        {
            count = count + 1;
        }
    }
    }
    else
    {
        for(int j=new_k; j<n; j++)
    {
        if(a[new_k-1]==a[j])
        {
            count = count + 1;
        }
    }
    }

    if(new_k == k)
    {
        pass = k + count;
    }
    else
    {
        pass = new_k + count;
    }

    cout<<pass<<endl;

    return 0;
}