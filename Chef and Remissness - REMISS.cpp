#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b;
        c=a+b;
        if(a>b)
        {
            cout<<a;
        }
        else if(b>a)
        {
            cout<<b;
        }
        cout<<" "<<c<<endl;
        
    }
       

    return 0;
}
