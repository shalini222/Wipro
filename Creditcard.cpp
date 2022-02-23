/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Credit Card
#include <bits/stdc++.h>

using namespace std;

    
int main(){
    
    int billAmount;
    cin>>billAmount;
    int sum = 0;
    while(billAmount != 0){
        int rem = billAmount%10;
        if(rem%2 != 0){
            sum += rem;
        }
        billAmount = billAmount/10;
    }
    cout<<sum;
}

