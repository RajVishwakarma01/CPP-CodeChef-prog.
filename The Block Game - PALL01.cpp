#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,r,sum=0,temp;    
        cin>>n;   
        temp=n;    
        while(n>0)    
        {    
            r=n%10;    
            sum=(sum*10)+r;    
            n=n/10;    
        }    
        if(temp==sum)   
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl; 
        }
    }
    return 0;
}
