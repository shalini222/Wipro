/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Password
#include <bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n <=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
  int n;
cin>>n;
int sum = 0;
for(int i =0; i<n; i++){
    sum += fib(i);
}
   cout<<sum;
}

