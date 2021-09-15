
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int num;
        cin>>num;
        if(num<10)
        {
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
       

    return 0;
}
