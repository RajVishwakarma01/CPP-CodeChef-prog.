#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int a,b,c,d;
       cin>>a>>b>>c;
       d=a+b+c;
       if(d == 180)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
        
    }
       

    return 0;
}
