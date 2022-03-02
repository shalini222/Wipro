/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*An online book reading community's grid displays books in a specific format.
 * Only one batch of books is displayed at a time and each batch of books is recognized as a string tagged a-z.
 * Each character of the string denotes the initials of the book's author. The community has decided to change the format of the display grid but before they can do this, they need to know the number of unique author's initials present in the given batch of books.
 * The unique author's initials are the initials that appear only once in the batch of books represented as a string.
 * 
 * Write an algorithm to help the community find the count of unique author's initials present in the given batch of books.
 * 
 * Input
 * The input consists of a string - batch, representing the book batch on the display grid.
 * 
 * Output
 * Print an integer representing the count of the unique author's initials present in the given batch of books.
 * 
 * Note
 * The batch of books contains only the lowercase letters as the author name initial.
 * 
 * Example
 * Input
 * asfddagha
 * Output
 * 4
 * 
 * Explanation
 * There are 4 unique characters (s,f,g,h) present in the string. Hence the output is 4.*/











#include <bits/stdc++.h>

using namespace std;







int main()
{
  string batch;
  cin>>batch;
  
  int n = batch.size();
  int count =0;
  for(int i = 0; i<n-1; i++){
      for(int j = i+1; j<n; j++){
          if(batch[i] == batch[j] and i != j){
              count++;
          }
      }
  }

cout<<count<<endl;
}
