#include<iostream>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	 {
	 	long n,r,s=0;
	 	cin>>n;
	 	do
	 	{
	 		r=n%10;
	 		n=n/10;
	 		s=s*10+r;
		 }
		 while(n!=0);
		 cout<<s<<endl;
	 	

	 	
	 }
	return 0;
}
