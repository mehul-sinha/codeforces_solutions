#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag = 0;
    int num[6];
    num[3]=12;
    num[4]=13;
    num[5]=14;

    for(int i = 0; i<n ; i++)
    {
        cin>>num[0]>>num[1]>>num[2];
        for(int j = 0; j<3; j++)
        {
            if(num[j]== 1 && num[j+1] == 1)
            {
                flag = flag + 1;
                break;
            }
            else if(num[j+1]== 1 && num[j+2] == 1)
            {
                flag = flag + 1;
                break;
            }
            else if(num[j]== 1 && num[j+2] == 1)
            {
                flag = flag + 1;
                break;
            }
        }
    }
    cout<<flag<<endl;
    
    return 0;
}