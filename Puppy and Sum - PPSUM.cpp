
#include <iostream>

using namespace std;
int sum(int n)
{
    return ((n*(n+1))/2);
}
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int a,b;
       cin>>a>>b;
       while(a--)
       {
           b=sum(b);
       }
       cout<<b<<endl;
   }
    return 0;
}
