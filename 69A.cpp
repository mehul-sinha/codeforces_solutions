#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][3];
    int sum1 =0 , sum2 = 0, sum3 = 0;

    for (int i=0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

    for (int x=0; x<n; x++)
    {
        sum1 = sum1 + a[x][0];
        sum2 = sum2 + a[x][1];
        sum3 = sum3 + a[x][2];
    }

    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout<<"YES"<<endl;;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}