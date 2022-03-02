/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// *An oil factory has N number of containers and each has a different capacity.
//  * During renovation, the manager decided to make some changes with the containers. He wishes to make different pairs for the containers in such a way that in the the first pair, the container of maximum capacity is paired with the container of minimum capacity, and so on for the rest of the containers,
//  * to maintain balance throughout all the pairs of containers.
//  * 
//  * Write an algorithm to make different pairs of containers in such a way that the first container in the pair is of maximum capacity and second container in the pair is of minimum capacity. 
//  * 
//  * Input
//  * The first line of the input consists of an integer - numContainers, representing the number of containers (N).
//  * The next line consists of N space-separated integers - cont1, cont2,....contN, representing container capacity.
//  * 
//  * Output
//  * Print K lines consisting of two space-separated integers representing the pairs that will be formed to maintain the balance by pairing the container of maximum capacity with the container of minimum capacity and so on.
//  * 
//  * Constraints
//  * 1 <= numContainers <= 10^3
//  * 1 <= conti <= 10^3
//  * 1 <= i <= numContainers
//  * 
//  * Note
//  * If only one container is left and no pair is possible then print the capacity of that container and the second value will be '0'
//  * 
//  * Example
//  * Example 1:
//  * Input:
//  * 6
//  * 100 560 23 19 53 20
//  * Output:
//  * 560 19
//  * 100 20
//  * 53 23
//  * Explanation: We have 6 containers with the capacity (100, 560, 23, 19, 53, 20), so we can form the following pairs of containers - (560,19),(100,20),(53,23)
//  * 
//  * Example 2:
//  * Input:
//  * 7
//  * 99 123 77 12 43 8 50
//  * Output:
//  * 123 8
//  * 99 12
//  * 77 43
//  * 50 0*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int numContainers;
  cin>>numContainers;
  
  int cont[numContainers];
  for(int i =0; i<numContainers; i++){
      cin>>cont[i];
  }
  
  
  sort(cont, cont+numContainers);
  int mid = numContainers/2;
  
  int n = numContainers-1;
  
  for(int i = 0; i<mid; i++){
      cout<<cont[n] <<" "<< cont[i]<<endl;
      
      n--;
  }
  
  if(numContainers%2 != 0){
      cout<<cont[mid]<<" "<<0 <<endl;
  }
  
  
}
