/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//middle range salary
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i<n; i++){
      cin>>a[i];
  }
  
  sort(a, a+n);
  int mid = n/2;
  int r1 = a[mid];
  int r2 = a[mid-1];
  int ans = r1+r2;
  cout<<ans;
}

