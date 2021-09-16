#include<iostream>

using namespace std;
int main()
{
    int t;
    int even = 0, odd = 0;
    cin>>t;
    for(int i=1 ;i<=t;i++)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        
    }
    if(even>odd)
        {
            cout<<"READY FOR BATTLE"<<endl;
        }
        else
        {
            cout<<"NOT READY"<<endl;
        }
    
    return 0;
}
