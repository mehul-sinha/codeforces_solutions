#include<iostream>

using namespace std;

int main()
{
    long long int a;
    cin>>a;

    long long int rem, quo;
    int counter;
    
    rem = a%5;

    if(rem!=0)
    {
        counter = 1;
    }
    else
    {
        counter = 0;
    }
    quo = a/5;

    long long int steps;

    steps = quo + counter;

    cout<<steps<<endl;

    return 0;

}