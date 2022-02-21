#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.size();
    int flag = 0;

    for(int i=0; i<n; i++)
    {
        if(str[i] == str[i+1] && str[i]==str[i+2] && str[i]==str[i+3] && str[i]==str[i+4] && str[i]==str[i+5] && str[i]==str[i+6])
        {
            flag = 1;
        }
    }

    if(flag == 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}