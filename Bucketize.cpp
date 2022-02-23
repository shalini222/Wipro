/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// A company is trying to bucketize
#include <bits/stdc++.h>

using namespace std;

    
    
    
    
    
    
int main(){
    
    int n;
    cin>>n;
    
    int sum =0;
    while( n != 0){
        int rem = n%10;
        if(rem%2 != 0){
            sum += rem;
        }
        n = n/10;
    }
    cout<<sum;
}

