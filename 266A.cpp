#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int counter = 0;


    for(int i = 0; i<n ; i++)
    {
        if(str[i]==str[i+1])
        {
            counter = counter + 1;
        }
    }
    cout<<counter<<endl;
    return 0;
}