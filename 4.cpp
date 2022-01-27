#include<bits/stdc++.h>
using namespace std;

int main() {
int  s, e;
cin>>s>>e;

int a[8] = {12, 34, 45, 8, 12,6, 7, 14};
int sum = 0;
for(int i =s-1; i<e; i++){
     sum += a[i];
}
cout<<sum<<endl;
    return 0;
}

output:
3
6
71