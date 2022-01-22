
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        
        string s1;
        string s2;
        
        cin>>s1;
        cin>>s2;
        int n = s1.length();
        int min = 0;
        int max = 0;
        int c;
        
        for(int j=0;j<n;j++){
            if(s1[j] == '?' || s2[j]=='?'){
                max++;
            }
            if(s1[j]!=s2[j] && s1[j] != '?' && s2[j] !='?'){
                min++;
                max++;
            }
               
        }
        cout<<min<<" "<<max<<endl;
        
    }

    return 0;
}
