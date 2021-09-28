
#include <iostream>

using namespace std;
long long gcd(int a,int b)
{
     if (a == 0){
       return b;
     }
    else if (b == 0){
       return a;
    }
  
    // base case
    else if (a == b){
        return a;
    }
    // a is greater
    else if (a > b){
        return gcd(a-b, b);
    }else{
    return gcd(a, b-a);
    }
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
        int a,b;
        cin>>a>>b;
        
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
   }
    return 0;
}
