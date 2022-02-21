#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int counter=0;

    while(a<=b)
    {
        a = a*3;
        b = b*2;
        counter = counter + 1;
    }

    cout<<counter<<endl;
    return 0;

}