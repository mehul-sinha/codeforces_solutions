#include<iostream>
#include<algorithm>

using namespace std;

int checkPalindrome(string str)
{
    string str1;
    str1 = str;
    reverse(str1.begin(), str1.end());
    if(str == str1)
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int flag, n, k;
        string s;
        cin>>n>>k;
        cin>>s;
        
        flag = checkPalindrome(s);

        if(flag==1 || k==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}
