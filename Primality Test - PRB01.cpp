#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int j,n,c=0;
        cin>>n;

        for (j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                c++;
            }
        }
            if (c == 2)
            {
                cout <<"yes" << endl;
            }
            else
            {
                cout <<"no" << endl;
            }
    }
    return 0;
}
