#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x =0;
    string str;


    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str == "x++" || str == "++x" || str == "X++" || str == "++X")
        {
            x = x + 1;
        }
        if(str == "x--" || str == "--x" || str == "X--" || str == "--X")
        {
            x = x - 1;
        }
    }
    cout<<x<<endl;
    return 0;
}