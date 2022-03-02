 /*Program Statement:
 * To create a profile on a social media account "ThePastBook", the user needs to enter a string value in the form of username.
 * The username should consists of only characters tagged a-z.
 * If the user enters an incorrect string containing digits the system automatically identifies the number of digits in the string and removes them.
 * 
 * Write an algorithm to help the system identify the count of digits present in the username.
 * 
 * Input
 * The input consists of a string- userName, representing the user name.
 * 
 * Output
 * Print an integer representing the total count of digits present in the username. If no digits are present output 0.
 * 
 * Example
 * Input
 * rah23ul
 * Output
 * 2
 * 
 * Explanation
 * There are two digits in the username, '2' and '3',the total count of digits are two(2).
 * Hence 2 is the output*/




#include <bits/stdc++.h>

using namespace std;

int main()
{
  string userName;
  cin>>userName;
  
  int n = userName.size();
  int count = 0;
  for(int i =0; i<n; i++){
      if(userName[i] == '0'|| userName[i] == '1'||userName[i] == '2'||userName[i] == '3'||userName[i] == '4'||userName[i] == '5'||userName[i] == '6'||userName[i] == '7'||userName[i] == '8'||userName[i] == '9'){
          count++;
      }
  }
  
  cout<<count<<endl;
}
