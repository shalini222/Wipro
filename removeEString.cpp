/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//prevStringEfinder
#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s1;
    cin>>s1;
    
    string s2;
    cin>>s2;
    
    int n1 = s1.size();
    int n2 = s2.size();
    
    // if(n1>n2){
    //     cout<<s.at(n1-1);
    // }
    // if(n1<n2){
    //     cout<<s7.at(n2-1);
    // }
    
    char ans;
    
    for(int i = 0; i<n1; i++){
         for(int j = 0; j<n2; j++){
             if(s1[i] != s2[j]){
                 ans = s1[i];
             }
         }
    }
    
    cout<<ans<<endl;
}
