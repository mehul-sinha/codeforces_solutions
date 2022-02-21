#include<iostream>
#include<cstring>

using namespace std;


int main()
{
    string s;
    cin>>s;

    int flag = 0;

    for(int x1 = 0; x1<s.length(); x1++)
    {
        if(s[x1]=='h')
        {
            for(int x2 = x1; x2<(s.length()); x2++)
            {
                if(s[x2]=='e')
                {
                    for(int x3 = x2; x3<(s.length()); x3++)
                    {
                        if(s[x3]=='l')
                        {
                            for(int x4 = x3; x4<(s.length()); x4++)
                            {
                                if(s[x4]=='l')
                                {
                                    for(int x5 = x4; x5<(s.length()); x5++)
                                    {
                                        if(s[x5]=='o')
                                        {
                                            flag = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}