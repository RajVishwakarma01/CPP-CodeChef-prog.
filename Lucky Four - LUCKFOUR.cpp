#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		while(n > 0)
		{
			int rem = n % 10;
			if(rem == 4)
			{
				ans++;
			}
			n /= 10;
		}
		cout<<ans<<endl;
	}
	 return 0;
}
