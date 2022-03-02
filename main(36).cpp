/*Program Statement - 
 * In an online maths tutorial a student is given a list of N numbers.
 * From this list, the student is required to sum each element in the list such that the ith element in the output list will be equal to the sum to the first element until the ith element in the list.
 * 
 * Write an algorithm to calculate the sum of each element in the list.
 * 
 * Input
 * The first line of input consists of an integer - numSize, representing the count of total numbers in the list (N).
 * The next line consists of N - separated integers -
 * element1, element2,.....elementN-1 representing the numeric value in the list.
 * 
 * Output
 * Print N space-separated integers representing the sum of each element in the list.
 * 
 * Constraints
 * 0 <= numSize <= 10^6
 * -10^6 <= elementi <= 10^6
 * 0 <= i < numSize
 * 
 * Example
 * Input
 * 5
 * 1 4 2 6 3
 * 
 * Output
 * 1 5 7 13 16*/
 
 
 
 #include <bits/stdc++.h>
 using namespace std;
 
 
 int main(){
     int numSize;
     cin>>numSize;
     
     int element[numSize];
     for(int i =0; i<numSize; i++){
         cin>>element[i];
     }
     
     int sum = 0;
     for(int i =0; i<numSize; i++ ){
        
             sum += element[i];
             cout<<sum<<" ";
         
     }
 }
 
 