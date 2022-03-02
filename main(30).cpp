/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Program Statement -
 * A game company has designed an online lottery game, Bingo. In this game, N number cards are displayed.
 * Each card has a value on it. The value can be negative or positive. The player must choose two cards. To win the game, the product of the values of the two cards must be maximum value possible for any pair of cards in the display.
 * The winning amount will be the sum of the to cards chosen by the player.
 * 
 * Write an algorithm to find the winning amount as the sum of the values of the two cards whose product value is maximum.
 * 
 * Input
 * The first line of the input consists of an integer numCards, representing the number of cards (N).
 * The second line consists of N space-separated integers - val1, val2,....,valN representing the values on the cards.
 * 
 * Output
 * Print an integer representing the sum of the values of the two cards whose product value is maximum.
 * 
 * Constraints
 * 0 <= numCards <= 10^6
 * -10^6 <= vali <= 10^6
 * 0 <= i <= numCards
 * 
 * Example
 * Input
 * 7
 * 9 -3 8 10 8 -7-6 
 * 
 * Output
 * 19*/





#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  int n;
  cin>>n;
  
  int numCards[n];
  for(int i = 0; i<n; i++){
      cin>>numCards[i];
  }
  
  
  int cards1 =0;
  int cards2 = 0;
  
  
  int maxProduct = 0;
  
  for(int i = 0; i<n-1; i++){
      for(int j = i+1; j<n; j++){
          if(numCards[i]*numCards[j] > maxProduct){
              maxProduct = numCards[i]*numCards[j];
              cards1 = numCards[i];
              cards2 = numCards[j];
          }
      }
  }
  
  int sum = cards1+cards2;
  cout<<sum<<endl;
    
}
