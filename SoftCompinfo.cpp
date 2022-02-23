/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// SoftCompInfo 
#include <bits/stdc++.h>

using namespace std;
bool isPrime(int &n){
    for(int i =2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}
    
int main(){
    
    int n;
    cin>>n;
    
    int sum = 0;
    
    while(n!= 0){
        int rem = n%10;
        if(isPrime(rem) == false){
            sum += rem;
        }
        
        n = n/10;
    }
    
    cout<<sum;
}

