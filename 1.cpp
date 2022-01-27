#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i = 0; i<n; i++){
       cin>>a[i];
   }
   
   int m;
   cin>>m;
   
   int res = 0;
   for(int i =0; i<n; i++){
       int d = a[i]%m;
       res += d;
   }
    cout<<res<<endl;
    return 0;
}

output 
n =5;
25 26 54 81 48
m =4;

6