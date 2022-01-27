#include<bits/stdc++.h>
using namespace std;

int main() {
       int n;
   cin>>n;
   int a[n];
   for(int i =0; i<n; i++){
       cin>>a[i];
   }
   
   int k ;
   cin>>k;
   
   sort(a, a+n);
   
   reverse(a, a+n);
   for(int i = 0; i<k; i++){
       cout<<a[i]<<" ";
   }
    return 0;

    return 0;
}

output:
5
89
14
5
10
50
2
89 50 