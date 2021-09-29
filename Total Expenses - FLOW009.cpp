#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float a,b;
        cin>>a>>b;
        long double t = a*b;
        if(a>1000)
        {
            cout<<fixed <<setprecision(6)<<t*0.9<<endl;
        }
        else
        {
           cout<<fixed<< setprecision(6)<<t<<endl;
        }
        
    }

    return 0;
}
