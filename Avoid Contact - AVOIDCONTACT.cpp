#include <iostream>
using namespace std;

int main() {
	int n,x,y;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        cin>>x>>y;
        // x -> total number of people.
        // y -> number of chickenpox-infected people.
        
        if(y==0)
        {
            cout<<x;
        }else if(x==y){
            cout<<x+y-1;
        }else{
            cout<<x+y;
        }
        cout<<endl;
    }

    
	return 0;
}
