#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float BS,HRA,DA,GS;
        cin>>BS;
        if(BS<1500){
            
        HRA = (10*BS)/100;
        DA = (90*BS)/100;
        GS=HRA+DA+BS;
        }
        if(BS>=1500)
        {
            HRA=500;
              DA = BS*0.98;
              GS=HRA+DA+BS;
        }
   cout<<fixed<<setprecision(2)<<GS<<endl;
    }
    return 0;
}
