#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n ;
    cin>>n;
     int k;
     cin>>k;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    
   
   
    sort(a, a+n);
    cout<<a[k-1]<<endl;
return 0;
}

output:
5

3

45

32

67

21

12
32
