//Enormous Input Test.
#include <iostream>
using namespace std;
int main()
{
    int n,k,b=0;
    cin>>n>>k;
    for(int i=1 ;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a % k == 0)
        {
            b++;
        }
    }
cout<<b<<endl;
    return 0;
}
