#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int size_s = s.length();

    int capital_s = 0;
    int lower_s = 0;

    for(int i=0; i<size_s; i++)
    {
        if(isupper(s[i]))
        {
            capital_s = capital_s + 1;
        }

        if(islower(s[i]))
        {
            lower_s = lower_s + 1;
        }
    }

    if(lower_s>=capital_s)
    {
        for(int j = 0; j<size_s; j++)
        {
            s[j] = tolower(s[j]);
        }
    }
    else
    {
         for(int k = 0; k<size_s; k++)
        {
            s[k] = toupper(s[k]);
        }
    }

    cout<<s;

    return 0;
}

