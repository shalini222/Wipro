/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//barcode
#include <bits/stdc++.h>

using namespace std;

int res(int n) {
   int min = n % 10; //assume that last digit is the smallest
   n /= 10; //to start from the second last digit
   while (n != 0) {
      if (min > n % 10)
         min = n % 10;
      n /= 10;
   }
   return min;
}


    
int main(){
    int n;
    cin>>n;
   cout<<res(n);
}

