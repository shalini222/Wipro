/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// find Max digit 
#include <bits/stdc++.h>

using namespace std;

int main()
{
   long int n;
   cin>>n;
   
   int rem = n%10;
   
   while(n != 0){
       if(rem <n%10){
           rem = n%10;
          
       }
        n = n/10;
   }
   
   cout<<rem;
}
