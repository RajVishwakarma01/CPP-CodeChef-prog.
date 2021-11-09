
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        
        cin>>n; // 4
        int arr[n];
        
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i]; // 3 15 9 6
        }
        int minm = arr[0];
        for(int i=0; i<n; i++)
        {
            minm = min(minm,arr[i]); // 3
            
        }
        
        bool flag ;
        int ratio = 1;
        for(int j=1;j<=minm;j++) 
        {
            flag = true; 
            for(int k=0;k<n;k++) 
            {
                if(arr[k]%j!=0) // 1-> False , 2-> True , 3-> False , 4- True
                {
                    flag = false;
                    break;
                }
            }
            if(flag==true) 
            {
                ratio = j; // 1,3
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]/ratio<<" "; // 3/3=1 ,15/3=5,9/3=3,6/3=2 -> 1 5 3 2
        }
        cout<<endl;
        
    } 

    return 0;
}
