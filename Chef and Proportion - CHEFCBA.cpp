#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(a*c==b*d||a*d==b*c||a*b==c*d )
    {
        cout<<"Possible"<<endl;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
	return 0;
}
