/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// even no of line of pgs
#include <bits/stdc++.h>

using namespace std;

int main()
{
        string s;
        cin>>s;
        
        int n = s.size();
        
        string ans = " ";
        for(int i = 0; i<n; i++){
            if(s[i]%2 == 0){
                ans += s[i];
            }
        }
        
        
        cout<<ans;
}
