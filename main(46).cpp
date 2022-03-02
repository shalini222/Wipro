/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int first(int n ){
    while(n >= 10){
        n = n/10;
    }
    
    return n;
}

int last(int n){
    return (n %10);
}

int main()
{
  int N ;
  cin>>N;
  int M;
  cin>>M;
  int f1 = first(N);
  int f2 = first(M);
  
   int l1 = last(N);
  int l2 = last(M);
  
  
cout<<(f1+f2)<<(l1+l2)<<" ";
  cout<<(f1-f2)<<(l1-l2)<<" ";
  cout<<(f1*f2)<<(l1*l2)<<" ";
  
  
}
