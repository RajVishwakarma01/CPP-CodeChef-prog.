#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>b>>c; // b->8 c->12 
        a=__gcd(b,c); //common divisor is 4 
        cout<<c/a<<endl; // 12/4 -> 3
        
    }
    
	return 0;
}
