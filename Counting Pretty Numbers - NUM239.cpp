#include <iostream>

using namespace std;

int main()
{
    int l,r,n,count=0;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
                if(i%10==2 || i%10==3 || i%10==9){
                count = count+1;
                }
            
        }
        cout<<count<<endl;
        count=0;
    }

    return 0;
}
