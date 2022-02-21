#include<iostream>
#include<cstring>

using namespace std;

string toLowerCase(string s, int n)
{
    for(int i=0; i<n; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string str;
    cin>>str;
    int length = str.size();
    str = toLowerCase(str, length);
    int a = 0;
    string new_str = str;

    for(int i=0; i<length; i++)
    {
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i')
        {
            new_str.erase(remove(new_str.begin(), new_str.end(), str[i]), new_str.end());
        }
    }
    
    int new_len = new_str.size();
    int n = 0;

    for(int j = 0; j<new_len; j++)
    {
        new_str.insert(j+n, ".");
        n = n + 1;
    }
    cout<<new_str<<endl;
    
    return 0;
}