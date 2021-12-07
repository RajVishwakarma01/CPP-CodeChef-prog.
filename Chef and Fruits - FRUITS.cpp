#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int min; 
        if(n>m)
        {
            min = n-m;
        }
        else
        {
            min = m-n;
        }
        min -= k;
        if (min<0)
        {
            min = 0;
        }
        cout<<min<<endl;
        

    }

    return 0;
}
