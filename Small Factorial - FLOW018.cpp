//Small Factorial - FLOW018
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
     for(i=0;i<t;i++){

    int num,fact=1;

    cin>>num;
     for(int i=1;i<=num;i++)
     {
      fact=fact*i;

     }
     cout<<fact<<endl;
}
    return 0;
}
