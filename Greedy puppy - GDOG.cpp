#include<iostream>
using namespace std;
int main()
{
    int t,imax,max=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,k;
        cin>>n>>k;
        max=0;
        for (int i = 1; i <= k; i++)
        {
            imax = n%i;
            if(imax>max)
            {
                max=imax;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}
