/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// space World
#include <bits/stdc++.h>

using namespace std;

    
    
    
    
    
    
int main(){
int a[1000],n,i,sum=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
  for(i=0;i<n;i++)
 {
     if(a[i]<0)
     sum++;
 }
cout<<sum<<endl;
    
}

