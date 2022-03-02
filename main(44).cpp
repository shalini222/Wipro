/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*The new bank, "YoursPay" has a list of N customers' bank account balances.
 * The list consists of both positive and negative balances. The positive balance signifies the current year's customers and the negative balance signifies last year's customers.
 * The bank has decided to offer shortlisted customers credit scores to their credit cards. The credit score will be the sum of the two balances from the list with the smallest product when multiplied. 
 * If the credit score is positive then the credit will be provided to the current year's customer, otherwise it will go to the last year's customer.
 * 
 * Write an algorithm to find the credit score.
 * 
 * Input
 * The first line of input consists of an integer - numCustomers, representing the number of banking customers (N).
 * The second line of input consists of N space separated integers - balance0, balance1,...balanceN-1 representing the customers bank balances.
 * 
 * Output
 * Print an integer representing the credit score.
 * 
 * Constraints
 * 2 <= numCustomers <= 10^9
 * -10^9 <= balancei <= 10^9
 * 0 <= i < numCustomers
 * 
 * Example
 * Input
 * 5
 * 1 8 -5 7 5
 * Output
 * 3
 * */





#include <bits/stdc++.h>

using namespace std;







int main()
{
  int numCustomers;
  cin>>numCustomers;
  
  int balance[numCustomers];
  
  
  for(int i = 0; i<numCustomers; i++){
      cin>>balance[i];
  }
  
  int p = 0;
  int s = 0;
  
  for(int i = 0; i<numCustomers-1; i++){
     for(int j = i+1; j<numCustomers; j++){
         if(balance[i]*balance[j]<p){
             p = balance[i]*balance[j];
             s = balance[i]+balance[j];
         }
     }
  }
  
  
  
  
  
  
  cout<<s<<endl;
  
  
  
  
}
