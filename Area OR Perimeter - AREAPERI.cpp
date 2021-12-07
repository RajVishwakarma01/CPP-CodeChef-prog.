#include <iostream>
using namespace std;
int main()
{
    int l,w,p,a;
    cin>>l>>w;

    a = l*w;
    p = 2*(l+w);

    if(a>p)
    {
        cout<<"Area"<<endl;
        cout<<a<<endl;
    }
    else if(a<p)
    {
        cout<<"Peri"<<endl;
        cout<<p<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<a<<endl;
    }
    return 0;
}
