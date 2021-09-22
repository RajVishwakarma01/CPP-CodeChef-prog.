#include <iostream>
using namespace std;

int main()
{
    int n1,n2,ans;
    cin>>n1>>n2;
    
    if(n1>n2)
    {
        ans = n1-n2;
        cout<<ans<<endl;
    }
    else
    {
        ans = n1+n2;
        cout<<ans<<endl;
    }

    return 0;
}
