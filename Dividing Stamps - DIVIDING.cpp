#include <iostream>
using namespace std;

int main() {
        int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for (int i=1;i<=n;i++){
	    sum=sum+i;
	}
	int x=0;
	for(int i=0;i<n;i++)
	x += arr[i];
	if(x==sum)
	cout<<"Yes\n";
	else
	cout<<"No\n";
	return 0;
}
