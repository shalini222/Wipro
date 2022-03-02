/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <bits/stdc++.h>

using namespace std;







int main()
{
  string batch;
  cin>>batch;
  
  int n = batch.size();
  int count =1;
  for(int i = 0; i<=n-1; i++){
      for(int j = i+1; j<=n; j++){
          if(batch[i] == batch[j]){
              count++;
          }
      }
  }
 int r = n-count;
cout<<r<<endl;
}
