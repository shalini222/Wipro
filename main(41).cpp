/*The children's toy making company "ToysFun" is building cubic shaped learning toys.
 * The company has a list of N dimensions suggested by its designers for the toys that are perfect cube numbers. To do this, they need to know the total count of perfect cube numbers present in the list of dimensions.
 * 
 * Write an algorithm to help the toy manufacturers find the total count of perfect cube numbers present in the list of dimensions.
 * 
 * Input
 * The first line of input consists of an integer - numDimensions representing the total number of dimensions selected by the designers (N).
 * The second line of input consists of N space separated integers - dimens1, dimens2,....,dimensN-1 representing the value of the dimensions selected by the designers.
 * 
 * Output
 * Print an integer value representing the total count of the dimensions that are perfect cube numbers.
 * 
 * Constraints
 * 0 < numDimensions <= 10^6
 * 0 < dimens < 10^6
 * 0 <= i < numDimensions
 * 
 * Example
 * Input
 * 9
 * 23 1 8 56 27 67 64 125 232
 * 
 * Output 
 * 5*/




#include <bits/stdc++.h>

using namespace std;

bool iCube(int &n){
    for(int i = 0; i<=n; i++){
        if(n == i*i*i){
            return true;
        }
    }
    
    return false;
}






int main()
{
  int numDimensions;
  cin>>numDimensions;
  
  
  int di[numDimensions];
  for(int i = 0; i<numDimensions; i++){
      cin>>di[i];
  }
  
  
  int count =0;
   for(int i = 0; i<numDimensions; i++){
      if(iCube(di[i])){
          count++;
      }
  }
  
  cout<<count<<endl;
}
